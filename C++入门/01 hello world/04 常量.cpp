#include<iostream>
using namespace std;

//常量
//1. #define
//2. const 关键字修饰的常量

#define Day 7

int main4() {

	const int Hours = 24;
	cout << "一周有" << Day << "天" << endl;
	cout << "一天有" << Hours << "小时" << endl;

	//Hours =12;  会报错 常量不可修改

	system("pause");
	return 0;
}