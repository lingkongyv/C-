#include<iostream>
using namespace std;
#include<vector>

int main20()
{
	vector<int>v1;

	//尾插法
	v1.push_back(25);
	v1.push_back(45);
	v1.push_back(35);

	v1.at(1) = 10;
	cout << v1[1] << endl;

	//获取第一个元素
	cout << "获取第一个元素:" << v1.front() << endl;
	//获取最后一个元素
	cout << "获取最后一个元素:" << v1.back() << endl;

	return 0;
}