#include<iostream>
using namespace std;
#include<string>

int main14()
{

	string s1 = "hello";

	//1.  []
	for (int i = 0; i < s1.length(); i++)
	{
		cout << s1[i] << " ";
	}

	cout << endl;

	//2.  at
	for (int i = 0; i < s1.length(); i++)
	{
		cout << s1.at(i) << " ";
	}

	cout << endl;

	//ÐÞ¸Äµ¥¸ö×Ö·û
	s1[0] = 'x';
	s1.at(1) = 'x';

	cout << s1 << endl;
	return 0;
}