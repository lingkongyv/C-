#include<iostream>
using namespace std;
#include <algorithm>
#include<string>
#include <vector>

//find 和 find_if
//find_if 传 仿函数

class Person
{
public:
	string name;
	int age;
	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
	//重载 == 
	bool operator== (const Person& p) const
	{
		if (this->age == p.age && this->name == p.name)
			return true;
		else
			return false;
	}
};

class GreaterFive
{
public:
	bool operator()(int v) const
	{
		return v > 5;
	}
};

class Greater20
{
public:
	bool operator()(const Person &p) const
	{
		return p.age > 20;
	}
};
int main46() {

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else {
		cout << "找到了" << endl;
	}

	vector<Person> vp;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	vp.push_back(p1);
	vp.push_back(p2);
	vp.push_back(p3);
	vp.push_back(p4);

	Person pp("bbb", 20);

	vector<Person>::iterator pos = find(vp.begin(), vp.end(), pp);
	if (pos == vp.end())
	{
		cout << "没有找到" << endl;
	}
	else {
		cout << "找到了  " << (*pos).name << "  "
			<< (*pos).age << endl;
	}

	vector<int>::iterator fit = find_if(v.begin(), v.end(), GreaterFive());
	if (fit == v.end())
	{
		cout << "没有找到" << endl;
	}
	else {
		cout << "找到了  " << *fit << endl;
	}

	vector<Person>::iterator fpos = find_if(vp.begin(), vp.end(), Greater20());
	if (fpos == vp.end())
	{
		cout << "没有找到" << endl;
	}
	else {
		cout << "找到了  " << (*fpos).name << "  "
			<< (*fpos).age << endl;
	}

	return 0;
}
