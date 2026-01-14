#include<iostream>
using namespace std; 
#include <algorithm>
#include <vector>

//普通函数
void print01(int val)
{
	cout << val << " ";
}
//函数对象
class print02
{
public:
	void operator()(int val) const
	{
		cout << val << " ";
	}
};

class Transform
{
public:
	int operator()(int v)const
	{
		return v;
	}
};

int main45() {

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int> vTarget;   //目标容器
	vTarget.resize(v.size());  //需要提前开辟空间

	//遍历算法
	cout << "v:" << endl;
	for_each(v.begin(), v.end(), print01);
	cout << endl;

	for_each(v.begin(), v.end(), print02());
	cout << endl;

	cout << "vTarget:" << endl;
	transform(v.begin(), v.end(), vTarget.begin(), Transform());
	for_each(vTarget.begin(), vTarget.end(), print02());
	cout << endl;

	system("pause");

	return 0;
}
