#include <iostream>
using namespace std;

//引用 : 给变量起一个别名
//语法 : 数据类型 &别名 = 原名;
//注意 : 引用必须初始化，且初始化后不能更改引用的对象
//引用的本质就是一个指针常量

//常量引用
//语法 : const 数据类型 &别名 = 原名;
//使用场景 用来修饰形参，防止误操作修改实参的值，同时又能提高效率

int main2()
{
    int a = 10;
	int& b = a; // b是a的别名
	cout << "a = " << a << endl; // 10
	cout << "b = " << b << endl; // 10
	b = 20; // 通过别名修改原变量的值
	cout << "a = " << a << endl; // 20
	cout << "b = " << b << endl; // 20

	//int& c; // 错误，引用必须初始化  

    system("pause");
    return 0;
}
