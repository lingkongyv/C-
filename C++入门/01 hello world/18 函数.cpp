#include<iostream>
using namespace std;

//在 C++ 中，函数需要在使用之前进行声明或定义。
//前置声明  ：提前告诉编译器函数存在  （声明可以多次，定义只能一次）
void Swap1(int a, int b);
void Swap2(int& a, int& b);

int main18()
{
    int a = 9, b = 2;
    Swap1(a, b);  //结果 两个变量并没有交换
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;   
    
    Swap2(a, b);  //结果 两个变量交换
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    system("pause");
    return 0;
}

//值传递
void Swap1(int a, int b) {
    int c = a;
    a = b;
    b = c;
}
//引用传递
void Swap2(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}