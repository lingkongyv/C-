#include <iostream>
using namespace std;

//静态成员变量
//所有对象共享同一份数据
//在编译阶段分配内存
//类内声明，类外初始化

//静态成员函数
//只能访问静态成员变量
//所有对象共享同一份函数

class Person
{
public:
	static int a;
	int c;
	
//静态成员变量也有访问权限,类外不能访问
private:
	static int b;

public:
	static void func()
	{
		cout << "func调用" << endl;
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
		//cout << c << endl; //错误，静态成员函数不能访问非静态成员变量
	}
};

int Person::a = 10;
int Person::b = 30;


int main9()
{
	Person p1;
	cout << p1.a << endl;
	Person p2;
	p2.a = 20;
	cout << p1.a << endl;
	cout << Person::a << endl;

	p1.func();
	Person::func();

	system("pause");
	return 0;
}
