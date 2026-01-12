#include<iostream>
using namespace std;
#include<map>

//map中所有元素都是pair
//pair中第一个元素为key(键值)，起到索引作用，第二个元素为value(实值)
//所有元素都会根据元素的键值自动排序
//map/multimap属于关联式容器，底层结构基于红黑树（一种平衡二叉搜索树）实现
//优点 : 可以根据key值快速找到value值
//map和multimap区别 :
//map不允许容器中有重复key值元素
//multimap允许容器中有重复key值元素

void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key: " << (*it).first
			<< "   value: " << it->second
			<< endl;
	}
	cout << "--------------------------" << endl;
}

int main38()
{
	//创建map容器
	map<int, int>m;

	//插入
	m.insert(pair<int, int>(1, 10));
	m.insert(make_pair(1, 20));
	m.insert(pair<int, int>(2, 10));
	//不建议使用
	//m[4] = 23;
	printMap(m);

	//拷贝构造
	map<int, int>m2(m);
	printMap(m2);

	//赋值
	map<int, int>m3;
	m3 = m2;
	printMap(m3);


	map<int, int>m4;
	m4.insert(pair<int, int>(1, 10));
	m4.insert(pair<int, int>(3, 20));
	m4.insert(pair<int, int>(2, 10));
	m4.insert(pair<int, int>(5, 40));

	printMap(m4);

	//判断容器是否为空
	if (m3.empty())
	{
		cout << "m3为空" << endl;
	}
	else
	{
		cout << "m3不为空" << endl;
		cout << "m3的大小为:" << m3.size() << endl;
	}

	//map容器交换
	cout << "m3和m4交换前" << endl;
	printMap(m3);
	printMap(m4);

	m3.swap(m4);
	cout << "m3和m4交换后" << endl;
	printMap(m3);
	printMap(m4);

	//删除元素
	cout << "删除m3的元素" << endl;
	m3.erase(m3.begin());
	m3.erase(3);
	//m3.erase(m3.begin(),m3.end());
	printMap(m3);

	//查找
	//find(key)  查找key是否存在,若存在,返回该键的元素的迭代器
	//不存在,返回 set.end()
	cout << "查找m3中的元素" << endl;
	map<int, int>::iterator pos = m3.find(5);
	if (pos != m3.end())
	{
		cout << "找到元素: key: " << (*pos).first
			<< "   value: " << (*pos).second
			<< endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

	//统计
	//count(key)  统计key的元素个数
	//对于map而言,统计的结果是 0 或 1
	cout << m3.count(2) << endl;
	cout << m3.count(5) << endl;

	multimap<int, int>m5;
	m5.insert(pair<int, int>(1, 5));
	m5.insert(pair<int, int>(1, 5));
	m5.insert(pair<int, int>(1, 5));
	m5.insert(pair<int, int>(1, 5));

	cout << "输出multiset的s5" << endl;
	for (multimap<int, int>::iterator it = m5.begin(); it != m5.end(); it++)
	{
		cout << "找到元素: key: " << (*it).first
			<< "   value: " << (*it).second
			<< endl;
	}
	cout << endl;
	cout << "统计m5中1的个数" << endl;
	cout << m5.count(1) << endl;

	//清空
	m3.clear();

	return 0;
}