#include<iostream>
using namespace std;
#include<list>

//STL中的链表是双向循环链表
//list 的迭代器只支持前移和后移 属于双向迭代器
//list 的插入和删除操作都不会造成原有list迭代器失效，在vector中不成立

void PrintList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main30()
{
	//创建list
	list<int>L1;

	//添加数据
	L1.push_back(12);
	L1.push_back(21);
	L1.push_back(45);
	L1.push_back(24);
	//遍历容器
	PrintList(L1);
	//区间方式构造
	list<int>L2(L1.begin(), L1.end());
	PrintList(L2);
	//拷贝构造
	list<int>L3(L2);
	PrintList(L3);
	//n个elem
	list<int>L4(5, 25);
	PrintList(L4);

	//赋值
	list<int>L5;
	L5 = L4;
	PrintList(L5);

	list<int>L6;
	L6.assign(L2.begin(), L2.end());
	PrintList(L6);

	list<int>L7;
	L7.assign(3, 56);
	PrintList(L7);

	cout << "L6和L7交换后:" << endl;
	L7.swap(L6);
	PrintList(L6);
	PrintList(L7);

	return 0;
}