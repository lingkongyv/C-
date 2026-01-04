#include<iostream>
using namespace std;
#include <fstream>
#include <string>

//文本文件 - 文件以文本的ASCI码形式存储在计算机中
//二进制文件 - 文件以文本的二进制形式存储在计算机中，用户一般不能直接读懂它们
//打开方式要指定为 ios::binary 否则会出错

class Person
{
public:
	char m_Name[64];
	int m_Age;
};

int main() {

	//1、包含头文件

	//2、创建输出流对象
	ofstream ofs("person.txt", ios::out | ios::binary);
	
	//3、打开文件
	ofs.open("person.txt", ios::out | ios::binary);

	Person p = { "张三"  , 18 };

	//4、写文件
	ofs.write((const char*)&p, sizeof(p));

	//5、关闭文件
	ofs.close();

	//6.创建输入流对象
	ifstream ifs("person.txt", ios::in | ios::binary);

	//7.打开文件并且判断是否成功
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return 0;
	}

	//8、读文件
	ifs.read((char*)&p, sizeof(p));
	cout << "姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;

	//9、关闭文件
	ifs.close();

	system("pause");
	return 0;
}
