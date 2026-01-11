#include<iostream>
using namespace std;
#include<string>

//类模板
//1.类模板没有自动类型推导的使用方式，必须指定类型参数
//2.类模板在模板参数列表中可以有多个参数，使用逗号分隔

//类模板中成员函数和普通类中成员函数创建时机是有区别的:
//普通类中的成员函数一开始就可以创建
//类模板中的成员函数在调用时才创建

template<class NameType, class AgeType = int>
class Person
{
public:
	NameType name;
	AgeType age;
	Person(NameType name, AgeType age) :name(name), age(age)
	{

	}

	void showPerson()
	{
		cout << "name: " << this->name << ", age: " << this->age << endl;
	}
};

int main4()
{
	//Person p1("Alice", 30);  //错误，类模板没有自动类型推导

	//只能指定类型参数的方式使用类模板
	Person<string, int> p1("Alice", 30);
	
	//模板参数列表里有,就可以使用默认的模板参数
	Person<string> p2("Bob", 30);

	p1.showPerson();
	p2.showPerson();

	system("pause");
	return 0;
}