#include<iostream>
using namespace std;
#include<vector>
#include<string>

//vector存放自定义数据类型
class Person
{
public:
	string m_Name;
	int m_Age;

	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
};

void Test01()
{
	vector<Person> v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);

	//向容器中存放自定义数据类型
	v.push_back(p1);
	v.push_back(p3);
	v.push_back(p2);

	//迭代器iterator it相当于就是一个指针
	//通过迭代器访问容器中的数据
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		/*cout << "name:" << it->m_Name << " age:" << it->m_Age << endl;*/
		cout << "name:" << (*it).m_Name << " age:" << (*it).m_Age << endl;
	}
}

//存放自定义数据类型  指针
void Test02()
{
	vector<Person*> v;  //存放自定义数据类型指针
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	//向容器中存放自定义数据类型指针
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	//通过迭代器访问容器中的数据
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "name:" << (*it)->m_Name << " age:" << (*it)->m_Age << endl;
	}
}

int main9()
{

	Test01();
	Test02();

	return 0;
}