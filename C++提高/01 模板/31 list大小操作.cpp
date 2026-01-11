#include<iostream>
using namespace std;
#include<list>

void PrintList02(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main31()
{
	//创建list
	list<int>L1;

	//添加数据
	L1.push_back(12);
	L1.push_back(21);
	L1.push_back(45);
	L1.push_back(24);
	PrintList02(L1);
	//判断容器是否为空
	if(L1.empty())
	{
		cout << "L1为空" << endl;
	}
	else {
		cout << "L1不为空" << endl;
		cout << "L1的元素个数为" << L1.size() << endl;
	}
	//重新指定大小
	//L1.resize(10);
	L1.resize(10,100);
	PrintList02(L1);

	L1.resize(2);
	PrintList02(L1);

	return 0;
}