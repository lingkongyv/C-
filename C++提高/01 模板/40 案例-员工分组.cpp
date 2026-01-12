#include<iostream>
using namespace std;
#include<map>
#include<vector>
#include<ctime>
#define 策划 0
#define 美术 1
#define 研发 2

class Worker
{
public:
	string name;
	int salary;
};

void createWorker(vector<Worker>& v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker w;
		w.name = "员工";
		w.name += nameSeed[i];
		//随机数种子
		w.salary = rand() % 10001 + 10000;  // 10000~20000
		v.push_back(w);
	}
}
void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		int  deptId = rand() % 3; // 0 1 2
		m.insert(make_pair(deptId,*it));
	}
}
void showByGroup(multimap<int, Worker>& m)
{
	cout << "策划部门:" << endl;
	multimap<int, Worker>::iterator pos = m.find(策划);
	int index = 0;
	for (; pos != m.end() && index<m.count(策划); pos++, index++)
	{
		cout << "姓名：" << pos->second.name
			<< "  工资：" << pos->second.salary
			<< endl;
	}
	index = 0;
	cout << "美术部门:" << endl;
	pos = m.find(美术);
	for (; pos != m.end() && index < m.count(美术); pos++, index++)
	{
		cout << "姓名：" << pos->second.name
			<< "  工资：" << pos->second.salary
			<< endl;
	}
	index = 0;
	cout << "研发部门:" << endl;
	pos = m.find(研发);
	for (; pos != m.end() && index < m.count(研发); pos++, index++)
	{
		cout << "姓名：" << pos->second.name
			<< "  工资：" << pos->second.salary
			<< endl;
	}
}
int main40()
{
	srand((unsigned int)time(NULL));
	vector<Worker>v;
	createWorker(v);

	multimap<int, Worker>m;
	setGroup(v,m);

	showByGroup(m);

	return 0;
}