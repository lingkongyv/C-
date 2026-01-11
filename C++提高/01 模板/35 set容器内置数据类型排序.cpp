#include<iostream>
using namespace std;
#include<set>

void printSet02(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

class Mycompare
{
public:
	bool operator()(int v1, int v2) const
	{
		return v1 > v2;
	}
};

int main35()
{
	set<int>s1;

	//插入数据只有insert方式
	s1.insert(10);
	s1.insert(52);
	s1.insert(22);
	s1.insert(13);
	printSet02(s1);

	//指定排序规则为从大到小
	set<int, Mycompare>s2;
	s2.insert(10);
	s2.insert(52);
	s2.insert(22);
	s2.insert(13);
	for (set<int, Mycompare>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}