#include<iostream>
using namespace std;
#include<string>

//重载函数调用操作符的类，其对象常称为函数对象
//函数对象使用重载的()时，行为类似函数调用，也叫仿函数
//本质 :
//函数对象(仿函数)是一个类，不是一个函数

//函数对象(仿函数)
/*
函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
函数对象超出普通函数的概念，函数对象可以有自己的状态
函数对象可以作为参数传递
*/

class MyAdd 
{
public:
	int operator()(int v1, int v2) const
	{
		return v1 + v2;
	}
};

class MyPrint
{
public:
	int count;//内部自己状态
	MyPrint()
	{
		this->count = 0;
	}
	void operator()(string s) 
	{
		this->count++;
		cout << s << endl;
	}
};

int main41()
{
	MyAdd ma;
	cout << ma(1, 2) << endl;
	MyPrint mp;
	mp("sad");
	cout << "MyPrint的调用次数是：" << mp.count << endl;

	return 0;
}