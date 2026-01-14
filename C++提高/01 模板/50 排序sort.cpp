#include<iostream>
using namespace std;
#include<algorithm>  
#include<ctime>
#include<vector>

void Print(int v)
{
	cout << v << " ";
}

int main50()
{
	//随机数种子
	srand((unsigned int)time(NULL));

	vector<int> v;
	v.push_back(122);
	v.push_back(23);
	v.push_back(52);
	v.push_back(122);
	v.push_back(33);
	v.push_back(6);

	vector<int> v1;
	v1.push_back(23);
	v1.push_back(33);
	v1.push_back(53);
	v1.push_back(253);


	//升序
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), Print);
	cout << endl;

	//降序
	sort(v.begin(), v.end(),greater<int>());
	for_each(v.begin(), v.end(), Print);
	cout << endl;

	//洗牌算法  即随机打乱顺序
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), Print);
	cout << endl;

	//重新升序
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), Print);
	cout << endl;

	//merge  两个元素容器合并到另一个容器中   其中两个容器必须是有序的
	vector<int>v2;
	//必须给目标容器提前开辟空间
	v2.resize(v.size() + v1.size());
	merge(v.begin(), v.end(), v1.begin(), v1.end(), v2.begin());
	for_each(v2.begin(), v2.end(), Print);
	cout << endl;

	//元素反转
	reverse(v2.begin(), v2.end());
	for_each(v2.begin(), v2.end(), Print);
	cout << endl;

	return 0;
}