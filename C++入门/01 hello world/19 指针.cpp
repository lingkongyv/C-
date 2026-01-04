#include<iostream>
using namespace std;

int main19()
{
	//数据类型 * 指针变量名;
	//指针变量存储的是一个地址，这个地址指向一个特定类型的数据

    int a = 10;
    int* p = &a;

    cout << a << endl;
    cout <<(int)p << endl;

	//通过指针变量访问指针所指向的变量
	//解引用操作：通过指针变量访问指针所指向的变量，在指针变量前加一个*
    cout << *p << endl;
    *p = 12;
    cout << *p << endl;
    cout << a << endl;

	//指针变量占用的内存空间大小
	//32位系统下，指针变量占4个字节
    //64位系统下，指针变量占8个字节
    cout << sizeof(p) << endl;
    cout << sizeof(int*) << endl;
    cout << sizeof(short*) << endl;
    cout << sizeof(double*) << endl;
    cout << sizeof(float*) << endl;

    //空指针 和 野指针
	//空指针：指针变量没有指向任何有效的内存空间，值为NULL
	//空指针不可访问  因为 0~255的内存空间是系统占用的
	int* p1 = NULL;
	//*p1 = 10; //错误写法

    //野指针：指针变量指向了一块不属于自己的内存空间
	int* p2 = (int*)0x1100;
    //cout << *p2 << endl; //引发了异常: 读取访问权限冲突。

    system("pause");
    return 0;
}
