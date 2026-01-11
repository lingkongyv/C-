#include <iostream>
#include <deque>
using namespace std;

int main24() {
    deque<int> d1;
    //尾插
    d1.push_back(1);
    d1.push_back(3);

    //头插
    d1.push_front(12);
    
    //尾删
    d1.pop_back();
    
    //头删
    d1.pop_front();

    for (deque<int>::iterator it = d1.begin(); it != d1.end(); it++)
    {
        cout << *it << endl;
    }


    //插入   提供迭代器
    cout << "插入元素" << endl;
    d1.insert(d1.begin(), 12);
    d1.insert(d1.begin(), 2, 45);

    cout << "d1:" << endl;
    for (deque<int>::iterator it = d1.begin(); it != d1.end(); it++)
    {
        cout << *it << endl;
    }

    //按区间插入
    deque<int>d2 = d1;
    //在d2的开始把d1插进去
    d2.insert(d2.begin(), d1.begin(), d1.end());
    cout << "d2:" << endl;
    for (deque<int>::iterator it = d2.begin(); it != d2.end(); it++)
    {
        cout << *it << endl;
    }

    //删除   提供迭代器
    cout << "删除元素" << endl;
    d1.erase(d1.begin());
    for (deque<int>::iterator it = d1.begin(); it != d1.end(); it++)
    {
        cout << *it << endl;
    }

    //清空
    cout << "清空" << endl;
    d1.clear();

    return 0;
}