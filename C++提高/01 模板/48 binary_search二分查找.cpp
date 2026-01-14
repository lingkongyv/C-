#include<iostream>
using namespace std;
#include <algorithm>
#include<string>
#include <vector>

//binary_search 二分查找
//必须是非递减 序列
//查找相邻重复元素

int main48() {

	vector<int> v;
	v.push_back(122);
	v.push_back(23);
	v.push_back(52);
	v.push_back(2);
	v.push_back(33);
	v.push_back(6);

	sort(v.begin(), v.end());
	
	//查找容器中是否有50
	bool ret = binary_search(v.begin(), v.end(), 50);
	if (ret)
	{
		cout << "找到了";
	}
	else
	{
		cout << "没找到";
	}

	return 0;
}
