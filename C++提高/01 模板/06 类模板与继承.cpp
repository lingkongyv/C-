#include<iostream>
using namespace std;
//类模板与继承
template<class T>
class Base
{
	T m;
};

//class Son :public Base  //错误, 必须要知道父类中的T类型,才能继承给子类

//class Son :public Base<int>  //父类的 T 只能是 int 了,不灵活
//{
//
//};

//如果想灵活指定父类中T类型,子类也需要变成类模板
template<class T1,class T2>
class Son:public Base<T2>
{
	T1 obj;
};

//总结:如果父类是类模板，子类需要指定出父类中T的数据类型

int main6()
{
	Son<int,char>s;

	system("pause");
	return 0;
}