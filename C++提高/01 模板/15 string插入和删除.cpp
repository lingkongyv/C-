#include<iostream>
using namespace std;
#include<string>

int main15()
{

	string s1 = "hello";
	//插入  
	s1.insert(2, "3445");  //从第 n 个位置起，插入后面的字符
	cout << s1 << endl;

	//删除
	s1.erase(2, 4);   //从第 n 个位置起，删除多少个
	cout << s1 << endl;  

	return 0;
}