#include<iostream>
using namespace std;

//类和结构体区别
//类的成员默认是私有的，结构体的成员默认是公有的

class Cube
{
	//成员变量
private:
	int l, w, h;

	//成员函数
public:
	//有参构造函数
	Cube(int a = 1, int b = 1, int c = 1)
	{
		l = a;
		w = b;
		h = c;
	}
	//无参构造函数
	Cube(){}

	//设置和获取成员变量的值  决定可读可写
	void setLength(int a)
	{
		l = a;
	}
	void setWidth(int b)
	{
		w = b;
	}
	void setHeight(int c)
	{
		h = c;
	}
	void getLength()
	{
		cout << "长：" << l << endl;
	}
	void getWidth()
	{
		cout << "宽：" << w << endl;
	}
	void getHeight()
	{
		cout << "高：" << h << endl;
	}
	int area()
	{
		return 2 * (l * w + l * h + w * h);
	}
	int volume()
	{
		return l * w * h;
	}

};
int main5()
{
	Cube c1(1, 2, 4);
	cout << "c1面积：" << c1.area() << endl;
	cout << "c1体积：" << c1.volume() << endl;
	c1.setHeight(3);
	c1.setLength(4);
	cout << "c1面积：" << c1.area() << endl;

	system("pause");
	return 0;
}