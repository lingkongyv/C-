#include<iostream>
using namespace std;
#include<vector>

void print(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it) << " ";
	}
	cout << endl;
}


int main18()
{
	vector<int>v1;  
	for (int i = 0; i < 6; i++)
	{
		v1.push_back(i);
	}
	print(v1);

	if (v1.empty())  //为真，代表容器为空
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1不为空" << endl;
		cout << "v1的容量为:" << v1.capacity() << endl;
		cout << "v1的大小为:" << v1.size() << endl;
	}
	
	//capacity()：vector实际分配的内存空间大小，由编译器分配
	//size()：vector当前存储的元素数量
	//resize(n, val)：调整大小，如果n > size，用val填充新元素；如果n < size，删除多余元素
	//容量(capacity)通常大于等于大小(size)，缩小时容量不会自动减少

	//重新指定大小
	cout << "再重新指定大小:" << endl;
	v1.resize(15,16); //利用重载版本，可以指定默认填充的值 ，参数2
	print(v1);
	cout << "v1的容量为:" << v1.capacity() << endl;
	cout << "v1的大小为:" << v1.size() << endl;

	cout << "重新指定大小:" << endl;
	//重新指定为小的大小，就会删除多出来的
	v1.resize(10);   //将vector大小调整为10
	//	这是缩小操作，会删除最后5个元素
	//	注意：容量(capacity)保持不变仍为15，只有大小(size)减少到10
	//	这是vector的特性，缩小操作不会自动减少容量
	print(v1);
	cout << "v1的容量为:" << v1.capacity() << endl;
	cout << "v1的大小为:" << v1.size() << endl;

	return 0;
}