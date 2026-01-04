#include <iostream>
using namespace std;

//按参数分类 有参构造和无参构造
//按类型分类 普通构造函数 拷贝构造函数

//浅拷贝和深拷贝

class Person
{
public:
	Person()
	{
		cout << "无参构造" << endl;
	}

	//初始化列表
	Person(int a,int b,int c):a(a),b(b),c(c)
	{
		cout << "有参构造" << endl;
	}

	Person(const Person &p)
	{
		cout << "拷贝构造函数" << endl;
	}
	
	//析构函数
	~Person()
	{
		cout << "析构函数调用" << endl;
	}

private:
	int a, b, c;

};

void Test()
{
	Person p1; //无参构造
	Person p2(10,8,7); //有参构造
	Person p3(p2); //拷贝构造函数
}
int main7()
{
	Test();
    system("pause");
    return 0;
}
 