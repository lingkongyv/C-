#include <iostream>
#include <deque>
using namespace std;

int main23() {

    //双端数组
    deque<int> d1;
    for (int i = 0; i < 3; i++)
    {
        d1.push_back(i);
    }

    for (deque<int>::iterator it = d1.begin(); it != d1.end(); it++)
    {
        cout << *it << endl;
    }

    //构造
    deque<int>d2(d1);
    deque<int>d3(3,34);
    deque<int>d4(d2.begin(), d2.end());

    //赋值
    deque<int>d5;
    deque<int>d6;
    deque<int>d7;

    d5 = d4;
    d6.assign(d2.begin(), d2.end());
    d6.assign(4,56);


    //判断是否为空
    if (d1.empty())
    {
        cout << "d1为空" << endl;
    }
    else
    {
        cout << "d1不为空" << endl;
        cout << "d1的大小是:" << d1.size() << endl;
        cout << "deque容器没有容量(capacity)" << endl;
    }

    //重新指定大小
    cout << "重新指定大小为8" << endl;
    d1.resize(8, 6);
    for (deque<int>::iterator it = d1.begin(); it != d1.end(); it++)
    {
        cout << *it << endl;
    }

    cout << "重新指定大小为5" << endl;
    d1.resize(5);
    for (deque<int>::iterator it = d1.begin(); it != d1.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}