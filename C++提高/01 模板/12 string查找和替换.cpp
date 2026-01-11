#include<iostream>
#include<string>
using namespace std;

int main12()
{
	string s1 = "abefgefh";
	int pos = s1.find("ef"); 
	//找到就返回第一个字符的索引，找不到返回-1
	if (pos == -1)
	{
		cout << "没有找到该字符串" << endl;
	}
	else
	{
		cout << pos << endl;
	}
	//find 和 rfind 区别  rfind 是从右往左查找
	pos = s1.rfind("ef");
	cout << pos << endl;

	//从1号位置起,3个字符 替换成 后面的字符串
	string s2 = s1;
	s2.replace(1, 3, "1111");
	cout << s2 << endl;

	return 0;
}