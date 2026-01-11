#include <iostream>
#include <list>
#include <string>
#include <tuple>  

using namespace std;

class Person
{
public:
    string name;
    int age;
    int height;

    Person(string n, int a, int h) : name(n), age(a), height(h) {}
};

void printPerson(const list<Person>& L)
{
    for (const auto& person : L)
    {
        cout << "姓名：" << person.name
            << "\t年龄：" << person.age
            << "\t身高：" << person.height
            << endl;
    }
}

//按照制定规则排序
bool comparePerson(const Person& p1, const Person& p2)
{
    // 方案1：详细版本
    if (p1.age != p2.age)
        return p1.age < p2.age;  // 年龄升序
    else if (p1.height != p2.height)
        return p1.height > p2.height;  // 身高降序
    else
        return p1.name < p2.name;  // 姓名升序（确保完全有序）
}

int main33()
{
    list<Person> L;

    L.emplace_back("刘备", 35, 175);
    L.emplace_back("关羽", 33, 200);
    L.emplace_back("张飞", 32, 180);
    L.emplace_back("赵云", 30, 195);
    L.emplace_back("马超", 30, 185);
    L.emplace_back("黄忠", 60, 175);

    cout << "排序前：" << endl;
    printPerson(L);

    cout << "-------------------" << endl;
    cout << "排序后：" << endl;

    L.sort(comparePerson);  // 排序
    printPerson(L);

    return 0;
}