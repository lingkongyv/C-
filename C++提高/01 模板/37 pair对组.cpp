#include<iostream>
using namespace std;
#include<string>

int main37()
{
	//对组pair 的创建
	//第一种创建方式
	pair<string, int>p("Tom", 20);
	cout << "姓名:" << p.first << "  年龄" << p.second << endl;

	//第二种创建方式
	pair<string, int>p2 = make_pair("Jerry", 30);
	cout << "姓名:" << p2.first << "  年龄" << p2.second << endl;

	return 0;
}