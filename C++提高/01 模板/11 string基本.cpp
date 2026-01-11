#include<iostream>
using namespace std;
#include<string>

int main11()
{
	// 不同的字符串构造方式
	string s1("Hello, World!");          // 直接使用C风格字符串初始化
	string s2 = " C++ Programming.";    // 使用赋值运算符初始化
	string s3(s2);                       // 拷贝构造函数，复制s2的内容
	string s4(5, '*');                   // 使用5个'*'字符构造字符串
	string s5(s1, 5);                    // 从s1的索引5位置开始复制到末尾

	cout << "初始化后的字符串：" << endl;
	cout << "s1: " << s1 << endl;        // 输出: Hello, World!
	cout << "s2: " << s2 << endl;        // 输出:  C++ Programming.
	cout << "s3: " << s3 << endl;        // 输出:  C++ Programming.
	cout << "s4: " << s4 << endl;        // 输出: *****
	cout << "s5(s1, 5): " << s5 << endl; // 输出: , World!

	cout << "__________________" << endl << endl;

	// 演示如何使用substr获取子串
	string s6 = s1.substr(0, 5);        // 从s1索引0开始取5个字符
	cout << "使用substr获取子串：" << endl;
	cout << "s6 = s1.substr(0, 5): " << s6 << endl; // 输出: Hello

	cout << "__________________" << endl << endl;

	// 字符串连接操作
	cout << "连接操作后的字符串：" << endl;

	s1 += s2;                // 将s2连接到s1末尾
	cout << "s1 += s2: " << s1 << endl;  // 输出: Hello, World! C++ Programming.

	s3.append(s4);           // 将s4连接到s3末尾
	cout << "s3.append(s4): " << s3 << endl;  // 输出:  C++ Programming.*****

	s4.append(s2, 5);        // 从s2的索引5位置开始复制到末尾，连接到s4
	cout << "s4.append(s2, 5): " << s4 << endl;  // 输出: *****Programming.

	s5.append(s2, 4, 8);     // 从s2的索引4开始复制8个字符，连接到s5
	cout << "s5.append(s2, 4, 8): " << s5 << endl;  // 输出: , World! Program

	// 演示如何正确添加前n个字符
	cout << "__________________" << endl << endl;
	cout << "演示正确的追加方式：" << endl;

	string s7 = "*****";
	s7.append(s2, 0, 5);    // 添加s2的前5个字符
	cout << "s7.append(s2, 0, 5): " << s7 << endl;  // 输出: ***** C++ 

	string s8 = "Hello";
	s8.append(s2, 1, 3);    // 从s2索引1开始添加3个字符
	cout << "s8.append(s2, 1, 3): " << s8 << endl;  // 输出: HelloC++

	return 0;
}