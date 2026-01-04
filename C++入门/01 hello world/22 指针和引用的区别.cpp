#include<iostream>
using namespace std;

// 使用指针
void swap1(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 使用引用（更简洁）
void swap2(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main22() 
{
    int x = 5, y = 10;

	//指针需要传地址才能修改实参的值
    swap1(&x, &y);  // 需要取地址

    //引用是一个变量的别名，就像一个人的两个名字一样。
    //它不是一个新的变量，而是给一个已存在的变量起的另一个名字。
    swap2(x, y);    // 直接传变量，更自然
    
    system("pausae");
    return 0;
}