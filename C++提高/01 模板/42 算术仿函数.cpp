#include<iostream>
using namespace std;
//引入头文件
#include<functional>
//内建函数对象 算术仿函数


int main42()
{
	//取反
	cout << negate<int>()(45) << endl;
	//取模
	cout << modulus<int>()(20, 9) << endl;
	//加法
	cout << plus<int>()(23, 45) << endl;
	//减法
	cout << minus<int>()(23, 45) << endl;
	//乘法
	cout << multiplies<int>()(23, 45) << endl;
	//除法
	cout << divides<int>()(22, 11) << endl;

	return 0;
}