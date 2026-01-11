#include<iostream>
#include<stack>
using namespace std;

//栈容器  先进后出
//栈不允许遍历
//栈可以判断容器是否为空 empty()
//可以返回元素个数  size()

int main28()
{
	stack<int>s;
	
	//入栈 
	s.push(10);
	s.push(23);
	s.push(34);
	s.push(24);
	
	cout << "栈的大小是：" << s.size() << endl;

	//只要栈不为空，就查看栈顶，并且执行出栈操作
	while (!s.empty())
	{
		cout << "查看栈顶元素为：" << s.top() << endl;
		s.pop();
	}
	cout << "栈的大小是：" << s.size() << endl;

	return 0;
}