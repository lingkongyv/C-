#include<iostream>
using namespace std;
#include <algorithm>
#include<string>
#include <vector>

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
	bool operator==(const Person& p) const
	{
		if (this->age == p.age)
			return true;
		else
			return false;
	}
};
class Greater20
{
public:
	bool operator()(int v) const
	{
		return v > 20;
	}
};

class AgeGreater20
{
public:
	bool operator()(const Person&p) const
	{
		return p.age > 20;
	}
};
int main49() {

	vector<int> v;
	v.push_back(122);
	v.push_back(23);
	v.push_back(52);
	v.push_back(122);
	v.push_back(33);
	v.push_back(6);

	//统计容器中122 的个数
	int num = count(v.begin(), v.end(), 122);
	cout << "122个数是:" << num << endl;

	vector<Person> vp;
	Person p1("aaa", 20);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 20);
	vp.push_back(p1);
	vp.push_back(p2);
	vp.push_back(p3);
	vp.push_back(p4);
	vp.push_back(p5);
	Person p("fff", 20);
	int nump = count(vp.begin(), vp.end(), p);
	cout << "和fff同岁数个数是:" << num << endl;

	int fnum = count_if(v.begin(), v.end(), Greater20());
	cout << "大于20的个数是:" << fnum << endl;

	int fnump = count_if(vp.begin(), vp.end(), AgeGreater20());
	cout << "大于20的个数是:" << fnump << endl;

	return 0;
}
