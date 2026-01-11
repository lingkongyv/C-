#include<iostream>
using namespace std;
#include<vector>

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
}

int main17()
{
	vector<int>v1;  //默认无参构造
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	cout << endl;

	//通过区间进行构造
	vector<int>v2(v1.begin(), v1.end());
	printVector(v2);
	cout << endl;

	//n个elem方式构造
	vector<int>v3(10, 100);
	printVector(v3);
	cout << endl;

	//拷贝构造
	vector<int>v4(v3);
	printVector(v4);
	cout << endl;

	//赋值
	vector<int>v5;
	v5 = v4;
	printVector(v5);
	cout << endl;

	//assign
	vector<int>v6;
	v6.assign(v5.begin(), v5.end());
	printVector(v6);
	cout << endl;

	//n个elem方式赋值
	vector<int>v7;
	v7.assign(10, 4);
	printVector(v7);
	cout << endl;

	return 0;
}