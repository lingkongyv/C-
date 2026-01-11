#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
#include<string>
using namespace std;

// 选手类
class Person
{
public:
	string name;   // 姓名
	int score;     // 平均分
	Person(string name, int score) :name(name), score(score)
	{

	}
};

// 创建5名选手
void creatPerson(vector<Person>& v)
{
	string nameSeed("ABCDE");  // 姓名后缀字母
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameSeed[i];   // 拼接姓名，如"选手A"
		int score = 0;
		Person p(name, score);
		v.push_back(p);        // 添加到vector
	}
}

// 为选手设置分数
void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		// 存储评委打分的deque容器
		deque<int>d;
		for (int i = 0; i < 5; i++)   // 假设有5个评委
		{
			int score;
			cin >> score;           // 输入分数
			d.push_back(score);
		}

		// 打印该选手的所有打分
		cout << it->name << "打分：";
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) // 注意：修改了迭代器名称避免冲突
		{
			cout << *dit << " ";
		}
		cout << endl;

		// 排序
		sort(d.begin(), d.end());
		// 去除最高分和最低分
		d.pop_front();   // 去掉最低分
		d.pop_back();    // 去掉最高分

		// 计算剩余分数的平均分
		int ave = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			ave += *dit;
		}
		ave /= d.size();

		// 设置选手的平均分
		it->score = ave;
	}
}

// 显示所有选手的分数
void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << it->name << " 平均分为:" << it->score << endl;
	}
}

int main27()
{
	vector<Person>v;       // 存储选手的容器
	creatPerson(v);        // 创建选手
	setScore(v);           // 评分
	showScore(v);          // 显示结果

	return 0;
}