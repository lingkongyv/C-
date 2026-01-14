#include<iostream>
using namespace std;
#include<algorithm>  
#include<vector>
//头文件
#include<numeric>

void Print02(int v)
{
	cout << v << " ";
}

int main52()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	for_each(v1.begin(), v1.end(), Print02);
	cout << endl;
	//求和 accumulate
	int total = accumulate(v1.begin(), v1.end(), 0);
	int total2 = accumulate(v1.begin(), v1.end(), 10);
	cout << "和为：" << total << endl;
	cout << "和为：" << total2 << endl;

	//fill  指定区间 填充为指定值
	fill(v1.begin(), v1.end(), 2);
	for_each(v1.begin(), v1.end(), Print02);

	return 0;
}