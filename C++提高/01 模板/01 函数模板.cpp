#include <iostream>
using namespace std;

//模板不可直接使用，不是万能的
//语法
//template <typename T>
//函数声明或者定义

//声明创建模板   表明其后面的符号是一种数据类型  通用的数据类型，名称自定义，常为大写字母
template <typename T>
T add(T a, T b)
{
    return a + b;
}

template <class S>  // typename 可以替换成class  效果一样
void Swap(S &a, S &b)
{
    S temp = a;
    a = b;
    b = temp;
}

//函数模板注意事项
//1.自动类型推导，必须推导出一致的数据类型才可以使用
//2.模板必须要指定数据类型才能使用

int main1()
{
    int x = 10, y = 20;
    double m = 14, n = 2.2;
    //1.自动类型推导  
    //调用模板函数时，编译器会根据传入参数的类型自动推导出T的具体类型
    cout << "int add: " << add(x, y) << endl;           // T被推导为int
	cout << "double add: " << add(m, n) << endl;        // T被推导为double

    //2.显示指定类型
	cout << "int add: " << add<int>(x, y) << endl;      // T被显式指定为int

    cout << "Before swap: x = " << x << ", y = " << y << endl;
	Swap<int>(x, y);                                    //S被显式指定为int
	cout << "After swap: x = " << x << ", y = " << y << endl;

	system("pause");
    return 0;
}
