#include<iostream>
using namespace std;
#include<map>

//将 CompareMap 类的定义移到 printMap02 函数之前
//写仿函数改变map排序规则
class CompareMap
{
public:
	bool operator()(int v1, int v2) const
	{
		//降序排序
		return v1 > v2;
	}
};

void printMap02(map<int, int, CompareMap>& m)
{
	for (map<int, int, CompareMap>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key: " << (*it).first
			<< "  value: " << it->second
			<< endl;
	}
	cout << "--------------------------" << endl;
}

int main39()
{
	map<int, int, CompareMap>m;

	//插入
	m.insert(make_pair(1, 20));
	m.insert(make_pair(2, 2));
	m.insert(make_pair(13, 0));
	m.insert(make_pair(5, 60));
	m.insert(make_pair(8, 30));

	printMap02(m);

	return 0;
}