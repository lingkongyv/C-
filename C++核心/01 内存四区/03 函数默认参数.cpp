#include <iostream>
using namespace std;

//函数默认参数
//如果我们在调用函数时，没有传递某个参数，则该参数会使用默认值
//默认参数必须从右向左依次设置，不能跳着设置
//如果某个位置已经有了默认参数，则从该位置开始，后面的参数都必须有默认参数
//如果函数声明和函数定义分开写，则默认参数只能出现在函数声明中，不能出现在函数定义中
//声明和定义只能有一个有默认参数，不能同时有默认参数
int add(int a, int b=20, int c = 2)
{
	cout << a << "," << b << "," << c << endl;
	return a + b + c;
}
int test(int a, int b = 20, int c = 2);
int test(int a, int b, int c)
{
	cout << a << "," << b << "," << c << endl;
	return a + b + c;
}

int main3()
{
	int a = 10;
	int c = 30;

	cout << add(a) << endl;    
	
	system("pause");
	return 0;
}
