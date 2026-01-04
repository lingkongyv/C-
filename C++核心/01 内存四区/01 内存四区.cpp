#include<iostream>
using namespace std;

//内存四区： 代码区 全局区 栈区 堆区

//静态变量
static int a = 10; //全局区 静态存储区

//全局区存放全局变量和静态变量
//栈区由编译器自动分配和释放 存放函数的参数值和局部变量

//new 在堆区分配内存 由程序员分配和释放
//new 返回的是一个该数据类型的指针 指向堆区的内存


int main1()
{
    system("pause");
    return 0;
}
