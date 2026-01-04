#include <iostream>
using namespace std;

class Person
{
	
};
class Car
{
	static int b;
	static void func2()
	{
	}
};
class Phone
{
	int a;
	void func()
	{

	}
};
int main10()
{
	Person p;
	//空类 ，对象占用1个字节
	cout << sizeof(p) << endl;

	Car c;
	//类中只有静态成员变量和静态成员函数，对象仍然占用1个字节
	cout << sizeof(c) << endl;

	Phone p1;
	//类中有非静态成员变量，对象占用成员变量所占空间大小 
	//函数不占用对象空间
	cout << sizeof(p1) << endl; 
	system("pause");
	return 0;
}
