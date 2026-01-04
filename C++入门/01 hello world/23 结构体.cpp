#include<iostream>
using namespace std;
#include<string>

struct stu {
    char name[20];
	float score;
};

//结构体嵌套结构体
struct teacher {
    stu s;
    char name[20];
};

int main23()
{
	//结构体数组
    stu s[3];
    for (int i = 0; i < 3; i++) {
        cout << "Enter Name, Score for student " << i + 1 << ": ";
        cin >> s[i].name >> s[i].score;
    }

	s[2].score = 95.5; // 修改第三个学生的分数

    //结构体指针  用箭头访问
	stu* p = &s[0];
	cout << "第一个学生(使用指针访问)---Name: " << p->name << ", Score: " << p->score << endl;
	p->score = 88.0; // 修改第一个学生的分数
    
    for (int i = 0; i < 3; i++) {
        cout << ", Name: " << s[i].name << ", Score: " << s[i].score << endl;
    }

    //
    teacher t = {
        s[1],"zhangsan"
    };

    cout << t.s.name <<endl;

    system("pause");
    return 0;
}

