#include <iostream>
using namespace std;
//普通函数与函数模板的区别
//普通函数调用时可以发生自动类型转换(隐式类型转换)
//函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
//函数模板调用时, 如果利用显示指定类型的方式，可以发生隐式类型转换

//普通函数
int myAdd(int a, int b)
{
    return a + b;
}

//函数模板
template <typename T>
T myAdd02(T a, T b)
{
    return a + b;
}

//普通函数与函数模板的调用规则:
//1.如果函数模板和普通函数都可以实现，优先调用普通函数
//2.可以通过空模板参数列表来强制调用函数模板
//3.函数模板也可以发生重载
//4.如果函数模板可以产生更好的匹配, 优先调用函数模板
//总结:既然提供了函数模板，最好就不要提供普通函数，否则容易出现二义性
void myPrint(int a, int b)
{
    cout << "调用的普通函数" << endl;
}

template <typename T>
void myPrint(T a, T b)
{
    cout << "调用的函数模板" << endl;
}

template <typename T>
void myPrint(T a, T b, T c)
{
    cout << "调用重载的函数模板" << endl;
}

//模板具有局限性
//模板并不是万能的，有些特定数据类型,需要用具体化方式做特殊实现
//学习模板并不是为了写模板,而是在STL里能运用系统提供的模板

int main3()
{
    int a = 10 ,b=23; 
    char c = 'd' , d = 'e';
	cout << myAdd(a, c) << endl; //隐式类型转换 char -> int
	//cout << myAdd02(a, c) << endl; //自动类型推导，类型不一致，报错
	cout << myAdd02<double>(a, c) << endl; //显示指定类型，可以隐式类型转换 char -> int

	myPrint(a, b);   //调用的普通函数

    myPrint<>(a, b); //调用的函数模板

    myPrint<>(a, b , 12); //调用重载的函数模板

	myPrint(c, d); //调用的函数模板

    system("pause");
    return 0;
}
