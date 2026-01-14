#include<iostream>
using namespace std;
#include<algorithm>  
#include<vector>

void Print03(int v)
{
	cout << v << " ";
}

int main()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	vector<int> v2;
	v2.push_back(2);
	v2.push_back(3);
	v2.push_back(4);
	v2.push_back(5);

	cout << "v1:";
	for_each(v1.begin(), v1.end(), Print03);
	cout << endl;
	
	cout << "v2:";
	for_each(v2.begin(), v2.end(), Print03);
	cout << endl;

	vector<int> vTarget;

	//获取交集
	//原容器必须是有序的
	//开辟目标容器的空间
	vTarget.resize(min(v1.size(), v2.size()));
	vector<int>::iterator ItEnd =  set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	cout << "交集vTarget:";
	for_each(vTarget.begin(), ItEnd, Print03);
	cout << endl;

	//获取并集
	//原容器必须是有序的
	vTarget.resize(v1.size() + v2.size());
	ItEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	cout << "并集vTarget:";
	for_each(vTarget.begin(), ItEnd, Print03);
	cout << endl;

	//获取差集
	//原容器必须是有序的
	vTarget.resize(max(v1.size(), v2.size()));
	cout << "v1和v2的差集vTarget:";
	ItEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), ItEnd, Print03);
	cout << endl;

	cout << "v2和v1的差集vTarget:";
	ItEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
	for_each(vTarget.begin(), ItEnd, Print03);
	cout << endl;

	return 0;
}