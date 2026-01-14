#include<iostream>
using namespace std;
#include<functional>
#include<algorithm>
#include<vector>
//内建函数对象 关系仿函数

//equal_to<int>()       等于 
//not_equal_to<int>()	不等于 
//greater<int>()		大于 
//greater_equal<int>()	大于等于 
//less<int>()			小于 
//less_equal<int>()		小于等于

int main43()
{
	vector<int>v;
	v.push_back(52);
	v.push_back(22);
	v.push_back(22);
	v.push_back(15);
	v.push_back(62);

	cout << "从小到大排序" << endl;
	sort(v.begin(), v.end());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	cout << "从大到小排序" << endl;
	sort(v.begin(), v.end(), greater<int>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}

	return 0;
}