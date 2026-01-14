#include<iostream>
using namespace std;
#include <algorithm>
#include<string>
#include <vector>

//adjacent_find
//查找相邻重复元素

int main47() {

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	v.push_back(3);
	v.push_back(6);

	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else {
		cout << "找到了 " << *it << endl;
	}

	return 0;
}
  