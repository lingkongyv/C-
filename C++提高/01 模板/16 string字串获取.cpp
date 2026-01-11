#include<iostream>
using namespace std;
#include<string>

int main16()
{

	string s1 = "hello";

	string s2 = s1.substr(2, 3);  //从第 n 个索引开始，截取 m 个 
	string s3 = s1.substr(0, 4);

	cout << s2 << endl;
	cout << s3 << endl;

	string email = "zhangsan@qq.com";
	int pos = email.find("@");  //返回找到的第一个字符的索引位置
	string username = email.substr(0, pos);
	cout << username << endl;
	  
	return 0;
}