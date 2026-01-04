#include<iostream>
using namespace std;

int main9()
{
	bool flag = true;
	cout << flag << endl;  //1
	flag = !flag;
	cout << flag << endl;  //0
	cout << sizeof(bool) << endl;  //1

	system("pause");
	return 0;
}