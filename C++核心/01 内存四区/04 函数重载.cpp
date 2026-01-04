#include <iostream>
using namespace std;

//函数重载
//同一个作用域下
//函数名相同
//参数列表不同（参数个数或参数类型或参数顺序不同）
//注意事项：
//函数重载与函数的返回值类型无关
//函数重载示例

void test();                    // 无参数
void test(int a);               // int参数
// void test(int &a);           // 注释掉，避免二义性
void test(const int& a);        // const int&参数
void test(float a);             // float参数
void test(int a, float b);      // int, float参数
void test(float a, int b);      // float, int参数（顺序不同）

// 函数定义
void test()
{
    cout << "无参数" << endl;
}

void test(int a)
{
    cout << "int a: " << a << endl;
}

void test(const int& a)
{
    cout << "const int& a: " << a << endl;
}

void test(float a)
{
    cout << "float a: " << a << endl;
}

void test(int a, float b)
{
    cout << "int a: " << a << ", float b: " << b << endl;
}

void test(float a, int b)
{
    cout << "float a: " << a << ", int b: " << b << endl;
}

int main4()
{
    int a = 10;
    float b = 3.14f;
    test();             // 调用无参数版本
    //test(a);            // 调用 test(int a)
    //test((const int&)a); // 调用 test(const int& a)
    test(b);            // 调用 test(float a)
    test(a, b);         // 调用 test(int a, float b)
    test(b, a);         // 调用 test(float a, int b)
    // 演示const引用
    //const int c = 20;
    //test(c);            // 明确调用 test(const int& a)

    system("pause");
    return 0;
}