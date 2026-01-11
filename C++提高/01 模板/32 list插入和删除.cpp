#include<iostream>
using namespace std;
#include<list>

void PrintList03(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main32()
{
	//创建list
	list<int>L;

	//尾插
	L.push_back(12);
	L.push_back(21);
	L.push_back(45);
	//头插
	L.push_front(100);
	L.push_front(200);
	PrintList03(L);

	//尾删
	L.pop_back();
	//头删
	L.pop_front();
	PrintList03(L);

	//插入
	list<int>::iterator it = L.begin();
	it++;
	L.insert(it, 400);
	PrintList03(L);

	//删除
	it = L.begin();
	L.erase(it);
	PrintList03(L);

	//移除  可以删除指定值
	L.push_back(1000);
	L.push_back(1000);
	L.push_back(134);
	PrintList03(L);
	L.remove(1000);
	PrintList03(L);

	//list本质是链表   不支持随机访问
	cout << "第一个元素：" << L.front() << endl;
	cout << "最后一个元素：" << L.back() << endl;

	//反转
	cout << "反转list：" << endl;
	L.reverse();
	PrintList03(L);

	//排序
	cout << "升序排序list：" << endl;
	L.sort();
	PrintList03(L);

	cout << "降序排序list：" << endl;
	L.reverse();
	PrintList03(L);

	//清空
	L.clear();
	PrintList03(L);

	return 0;
}