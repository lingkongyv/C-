#include<iostream>
using namespace std;
#include<functional>
#include<algorithm>
#include<vector>
//内建函数对象 逻辑仿函数
	
//logical_and<bool>()	与
//logical_or<bool>()	或
//logical_not<bool>()	非

int main44()
{
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	vector<bool>v2;
	v2.resize(v.size());

	//将v容器里的复制到v2里，并且取反
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());

	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}