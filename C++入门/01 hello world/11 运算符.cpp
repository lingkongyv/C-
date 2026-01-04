#include<iostream>
using namespace std;

/*

+
-
*
/   除法向下取整
%   取模（即余数）
++
--
==
>
<
>=
<=
&&  与  都真为真
||  或	有真为真
!   非  取反
 
*/


int main11()
{
	int a = 10, b = 3;
	cout<<a + b - a * b / a % b<<endl;

	cout << a++ << endl; // 先使用a的值，再自增1
	cout << a << endl;     // 输出自增后的a的值
	cout << ++b << endl; // 先自增1，再使用b的值
	cout << b << endl;     // 输出自增后的b的值
	
	double c = 3.1;
	double d = 2.9;
	cout << c / d << endl; // 浮点数除法

	if (a > b)
	{
		cout << "true" << endl;
	}

	system("pause");
	return 0;
}