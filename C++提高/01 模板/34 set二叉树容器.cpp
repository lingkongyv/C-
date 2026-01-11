#include<iostream>
using namespace std;
#include<set>

//所有元素都会在插入时自动被排序
//set/multiset 属于关联式容器 底层结构是用 二叉树 实现
// set 和 multiset区别
//set 不允许有重复的元素
//multiset 允许有重复的元素

void printSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main34()
{
	set<int>s1;

	//插入数据只有insert方式
	s1.insert(12);
	s1.insert(52);
	s1.insert(22);
	s1.insert(22);
	s1.insert(13);

	//遍历
	//所有元素都会在插入时自动被排序
	//不允许插入重复的元素
	printSet(s1);

	//拷贝构造
	set<int>s2(s1);
	printSet(s2);

	//赋值
	set<int>s3;
	s3 = s2;
	printSet(s3);

	set<int>s4;
	s4.insert(132);
	s4.insert(542);
	s4.insert(224);
	s4.insert(252);
	s4.insert(113);

	//判断容器是否为空
	if (s3.empty())
	{
		cout << "s3为空" << endl;
	}
	else
	{
		cout << "s3不为空" << endl;
		cout << "s3的大小为:" << s3.size() << endl;
	}

	//set容器交换
	cout << "s3和s4交换前" << endl;
	printSet(s3);
	printSet(s4);

	s3.swap(s4);
	cout << "s3和s4交换后" << endl;
	printSet(s3);
	printSet(s4);

	//删除元素
	cout << "删除s4的元素" << endl;
	s4.erase(s4.begin());
	s4.erase(22);
	printSet(s4);

	//查找
	//find(key)  查找key是否存在,若存在,返回该键的元素的迭代器
	//不存在,返回 set.end()
	cout << "查找s3中的元素" << endl;
	set<int>::iterator pos = s3.find(252);
	if (pos != s3.end())
	{
		cout << "找到元素:" << *pos << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}
	
	//统计
	//count(key)  统计key的元素个数
	//对于set而言,统计的结果是 0 或 1
	cout << s3.count(252) << endl;
	cout << s3.count(152) << endl;


	multiset<int>s5;
	s5.insert(5);
	s5.insert(5);
	s5.insert(5);
	s5.insert(5);
	s5.insert(5);
	cout << "输出multiset的s5" << endl;
	for (multiset<int>::iterator it = s5.begin(); it != s5.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	cout << "统计s5中5的个数" << endl;
	cout << s5.count(5) << endl;


	//清空
	s1.erase(s1.begin(), s1.end());
	s1.clear();

	return 0;
}