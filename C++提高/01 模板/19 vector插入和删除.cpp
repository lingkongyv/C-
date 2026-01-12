#include<iostream>
using namespace std;
#include<vector>

void print01(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it) << " ";
	}
	cout << endl;
}

int main19()
{
	vector<int>v1;

	//尾插法
	v1.push_back(25);
	v1.push_back(45);
	v1.push_back(86);
	v1.push_back(35);
	print01(v1);

	//尾删法
	v1.pop_back();
	print01(v1);

	//插入    第一个参数是迭代器
	v1.insert(v1.begin(), 34);
	v1.insert(v1.begin(), 3, 674);  //n个elem
	print01(v1);

	//删除  参数也是迭代器
	v1.erase(v1.begin());
	print01(v1);

	//清空
	//v1.erase(v1.begin(),v1.end());
	v1.clear();
	print01(v1);

	return 0;
}