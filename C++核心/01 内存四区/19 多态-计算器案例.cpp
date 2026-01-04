#include<iostream>
using namespace std;

//多态实现
//抽象计算器类
//多态优点 ：代码组织结构清晰，可读性强，扩展性好

//在多态中，通常父类中虚函数的实现是毫无意义的，主要都是调用子类重写的内容
//因此可以将虚函数改为纯虚函数
//纯虚函数语法:virtual 返回值类型 函数名(参数列表) = 0;
 
//当类中有了纯虚函数，这个类也称为抽象类

//抽象类特点:
//无法实例化对象
//子类必须重写抽象类中的纯虚函数，否则也属于抽象类

class AbstractCalculator
{
public:
	int m1;
	int m2;
public:
	virtual int getResult() = 0;//纯虚函数

	//利用虚析构函数可以解决通过父类指针释放子类对象时不干净的问题
	//虚析构 或者 纯虚析构  都需要有具体的函数实现 
	virtual ~AbstractCalculator() = 0;
};

AbstractCalculator:: ~AbstractCalculator()
{
	cout << "抽象计算器析构函数调用" << endl; 
}

//加法计算器类
class AddCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m1 + m2;
	}
};
//减法计算器类
class SubCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m1 - m2;
	}
};
//乘法计算器类
class MulCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m1 * m2;
	}
};

int main19()
{
	//AbstractCalculator abc1; //错误，抽象类无法实例化对象
	
	//在C++中，要实现运行时多态，必须：
	//	使用父类指针或引用指向子类对象
	//	函数必须是虚函数
	AbstractCalculator* abc = new AddCalculator;
	abc->m1 = 10;
	abc->m2 = 20;
	cout << "加法计算器结果：" << abc->getResult() << endl;
	//用完之后记得销毁，把堆区的数据释放掉
	delete abc;

	//父类指针指向减法计算器对象
	abc = new SubCalculator;
	abc->m1 = 10;
	abc->m2 = 20;
	cout << "减法计算器结果：" << abc->getResult() << endl;

	system("pause");
	return 0;
}