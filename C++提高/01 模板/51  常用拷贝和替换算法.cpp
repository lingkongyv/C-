#include<iostream>
using namespace std;
#include<algorithm>  
#include<ctime>
#include<vector>

void Print01(int v)
{
	cout << v << " ";
}

class Greater30
{
public:
	bool operator()(int v)const
	{
		return v >= 30;
	}
};
int main51()
{
	vector<int> v1;
	v1.push_back(122);
	v1.push_back(33);
	v1.push_back(33);
	v1.push_back(6);
	vector<int> v2;
	v2.resize(v1.size());
	//把v1的数据复制到v2里面
	copy(v1.begin(), v1.end(), v2.begin());
	for_each(v2.begin(), v2.end(), Print01);
	cout << endl;

	cout << "替换后" << endl;
	replace(v2.begin(), v2.end(), 33, 100);
	for_each(v2.begin(), v2.end(), Print01);
	cout << endl;

	//将大于等于30的替换成30
	replace_if(v2.begin(), v2.end(), Greater30(), 30);
	for_each(v2.begin(), v2.end(), Print01);
	cout << endl;

	//互换两个容器元素
	vector<int> v3;
	v3.push_back(1);
	v3.push_back(2);
	v3.push_back(3);
	v3.push_back(4);
	swap(v1, v3);
	for_each(v1.begin(), v1.end(), Print01);
	cout << endl;
	for_each(v3.begin(), v3.end(), Print01);
	cout << endl;

	return 0;
}