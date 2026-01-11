#include<iostream>
using namespace std;
#include<queue>
#include<string>

//队列容器  先进先出  队尾进，队头出
//队列不允许遍历  只有对头和对尾能被外界访问，所以不能遍历
//队列可以判断容器是否为空 empty()
//可以返回元素个数  size()

class Person
{
public:
	string name;
	int age;
	Person(string name, int age):name(name), age(age)
	{

	}
};

int main29()
{
	//创建队列
	queue<Person>q;

	Person p1("唐僧",30);
	Person p2("孙悟空", 1000);
	Person p3("猪八戒", 900);
	Person p4("沙僧", 800);

	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	cout << "队列大小为:" << q.size() << endl;
	while (!q.empty())
	{
		cout << "队头---姓名" << q.front().name << "\t年龄：" << q.front().age << endl;
		cout << "队尾---姓名" << q.back().name << "\t年龄：" << q.back().age << endl;
		
		//出队
		q.pop();
	}
	cout << "队列大小为:" << q.size() << endl;


	return 0;
}