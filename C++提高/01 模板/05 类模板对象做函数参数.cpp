#include<iostream>
using namespace std;
#include<string>

//类模板对象做函数参数
template<class T1,class T2>
class Person
{
public:
	T1 name;
	T2 age;
	Person(T1 name, T2 age) :name(name), age(age)
	{
	}

	void showPerson()
	{
		cout << "name: " << this->name << ", age: " << this->age << endl;
	}
};

//1.指定传入类型   (最常用,最广泛使用)
void printPerson(Person<string, int> &p)
{
	p.showPerson();
}
//2.参数模板化
template<class T1, class T2>
void printPerson2(Person<T1,T2> &p)
{
	p.showPerson();
	cout << "T1的类型:" << typeid(T1).name() << endl;
	cout << "T2的类型:" << typeid(T2).name() << endl;
}
//3.整个类模板化
template<class T>
void printPerson3(T &p)
{
	p.showPerson();
	cout << "T的类型:" << typeid(T).name() << endl;
}
int main5()
{
	Person<string, int>p("孙悟空", 500);
	printPerson(p);
	printPerson2(p);
	printPerson3(p);


	system("pause");
	return 0;
}