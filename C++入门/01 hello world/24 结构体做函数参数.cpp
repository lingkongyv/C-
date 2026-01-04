#include <iostream>
using namespace std;

struct stu {
	string name;
	float score;
};

//值传递
void print_S1(stu s);

//地址传递
void print_S2(const stu* s);   //加const 防止信息被修改

int main()
{
	stu s = { "张三",23 };
	print_S1(s);
	//值传递并没有修改name的值
	cout << s.name << endl;
	
	print_S2(&s);

	system("pause");
	return 0;
}

void print_S1(stu s)
{
	s.name = "李四";
}
                                                            
void print_S2(const stu* s)
{
	//s->name = "李四";  会报错 防止误操作修改值
	cout << s->name << endl;
}