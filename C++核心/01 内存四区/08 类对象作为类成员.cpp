#include <iostream>
using namespace std;
#include<string>
class Phone
{
public:
	string brand;
public:
	Phone(string brand)
	{
		this->brand = brand;
		cout << "手机的构造函数调用" << endl;
	}
	~Phone()
	{
		cout << "手机的析构函数调用" << endl;
	}
};

class Person
{
public:
	string m_Name;
	Phone m_Phone;
public:
	Person(string name, string brand) :m_Name(name),m_Phone(brand)
	{
		cout << "人的构造函数调用" << endl;
	}
	~Person()
	{
		cout << "人的析构函数调用" << endl;
	}
};


//当其他类作为本类成员，构造时，先调用成员类的构造函数，再调用本类的构造函数
//析构时，先调用本类的析构函数，再调用成员类的析构函数

void test01()
{
	Person p("zhangsan", "Apple");
	cout << "name:" << p.m_Name << " brand:" << p.m_Phone.brand << endl;
}
int main8()
{
	test01();

    system("pause");
    return 0;
}
