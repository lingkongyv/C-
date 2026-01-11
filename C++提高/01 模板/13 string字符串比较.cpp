#include<iostream>
using namespace std;
#include<string>

int main13()
{

	string s1 = "aello";
	string s2 = "hello";
	//主要用途 判断是否相等
	if (s1.compare(s2) == 0)
	{
		cout << "s1 == s2" << endl;
	}
	else if (s1.compare(s2) > 0)
	{
		cout << "s1 > s2" << endl;
	}
	else if (s1.compare(s2) < 0)
	{
		cout << "s1 < s2" << endl;
	}

	return 0;
}