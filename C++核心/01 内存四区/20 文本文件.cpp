#include<iostream>
using namespace std;
#include<string>

//1. 包含头文件
#include<fstream>

//文本文件 - 文件以文本的ASCI码形式存储在计算机中
//二进制文件 - 文件以文本的二进制形式存储在计算机中，用户一般不能直接读懂它们

//ofstream 写操作
//ifstream 读操作
//fstream  写操作

int main20()
{
	//2.创建流对象
	ofstream ofs;  //写文件
	ifstream ifs;  //读文件

	//3.指定打开方式  指定路径 打开模式
	ofs.open("test.txt", ios::out);

	//4.写操作
	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：18" << endl;

	//5.关闭文件
	ofs.close();
	
	//6.读操作
	ifs.open("test.txt", ios::in);

	//7.打开文件并且判断是否成功
	if(!ifs.is_open())
	{
		cout << "文件打开失败！" << endl;
		return 0;
	}
	
	// 有四种读取文件的方式
	// 注意：每次只能使用一种方式，因为文件指针会移动

	// 第一种方式 - 使用 >> 运算符（按单词读取）
	cout << "第一种方式（>>运算符）：" << endl;
	char buf1[1024] = { 0 };
	while (ifs >> buf1)
	{
		cout << buf1 << endl;
	}

	// 重置文件指针到开头，准备用第二种方式
	ifs.clear();  // 清除EOF标志
	ifs.seekg(0, ios::beg);  // 回到文件开头

	// 第二种方式 - 使用getline成员函数（按行读取）
	cout << "\n第二种方式（getline成员函数）：" << endl;
	char buf2[1024] = { 0 };
	while (ifs.getline(buf2, sizeof(buf2)))
	{
		cout << buf2 << endl;
	}

	// 重置文件指针到开头，准备用第三种方式
	ifs.clear();
	ifs.seekg(0, ios::beg);

	// 第三种方式 - 使用全局getline函数（按行读取，string版本）
	cout << "\n第三种方式（全局getline函数）：" << endl;
	string buf3;
	while (getline(ifs, buf3))
	{
		cout << buf3 << endl;
	}

	// 重置文件指针到开头，准备用第四种方式
	ifs.clear();
	ifs.seekg(0, ios::beg);

	// 第四种方式 - 使用get函数逐个字符读取
	cout << "\n第四种方式（逐个字符读取）：" << endl;
	int c;
	while ((c = ifs.get()) != EOF)  // get()返回int类型，EOF是-1    EOF 即 end of file
	{
		cout << (char)c;  // 转换为char输出
	}

	//7.关闭文件
	ifs.close();

	system("pause");
	return 0;
}
