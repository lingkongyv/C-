#include<iostream>
using namespace std;

/*

1字节 = 8比特
短整型 short			2字节	16比特
整型 int				4		32
长整型 long			4		32
长长整型 long long	8		64
单精度 float			4		32
双精度 double		8		64
字符 char			1       8
布尔 bool			1		8
*/

//默认情况 输出小数  会显示出6位有效数字

int main6()
{
	int a = 10;

	//语法：sizeof(数据类型 或者 变量)
	cout << sizeof(a) << endl;  //4

	//占用内存空间 指的是 占用多少字节
	cout << sizeof(short) << endl;  //2
	cout << sizeof(int) << endl;  //4
	cout << sizeof(long) << endl;  //4
	cout << sizeof(long long) << endl;  //8
	cout << sizeof(float) << endl;  //4
	cout << sizeof(double) << endl;  //8
	cout << sizeof(char) << endl;  //1
	cout << sizeof(bool) << endl;  //1

	//科学计数法
	float f2 = 3e2;    //3* 10^2
	cout << f2 << endl;

	float f3 = 3e-2;    //3* 10^-2
	cout << f3 << endl;

	system("pause");
	return 0;
}