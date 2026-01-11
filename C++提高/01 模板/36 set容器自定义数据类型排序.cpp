#include<iostream>
using namespace std;
#include<set>
#include<string>
class Person
{
public:
	string name;
	int age;
	Person(string n, int a) :name(n), age(a)
	{

	}
};

class ComparePerson
{
public:
	bool operator()(const Person&p1, const Person& p2) const
	{
		//按照年龄降序
		return p1.age > p2.age;
	}
};

int main36()
{
	//自定义的数据类型都会指定排序规则
	//利用仿函数
	set<Person, ComparePerson>s;
	Person p2("关羽", 33);
	Person p1("刘备", 35);
	Person p4("赵云", 30);
	Person p3("张飞", 32);
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	for (const auto& person : s)
	{
		cout << "姓名：" << person.name
			<< "\t年龄：" << person.age
			<< endl;
	}
	return 0;
}