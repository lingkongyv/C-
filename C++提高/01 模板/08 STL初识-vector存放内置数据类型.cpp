#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>  //标准算法头文件


void My_Print(int val) 
{
	cout << val << endl; 
}

//vector 容器存放内置数据类型

int main8()
{
	//创建vector容器，数组，存放int类型数据 
	vector<int> v;

	//向容器中插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(234);

	//通过迭代器访问容器中的数据
	//起始迭代器 指向容器第一个元素
	//vector<int>::iterator itBegin = v.begin();  
	//结束迭代器 指向容器最后一个元素的下一个位置
	//vector<int>::iterator itEnd = v.end();  

	////第一种遍历方式
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	//第二种遍历方式
	//for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << *it << endl;
	//}

	//第三种遍历方式 利用STL提供的遍历算法
	for_each(v.begin(), v.end(), My_Print);

	system("pause");
	return 0;
}