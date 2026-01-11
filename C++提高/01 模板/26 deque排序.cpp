#include <iostream>
#include <deque>
#include<algorithm>
using namespace std;

int main26() {
    deque<int> d1;
    d1.push_back(131);
    d1.push_back(35);
    d1.push_back(456);
    d1.push_back(25);
    d1.push_back(52);

    //排序前
    cout << "排序前：" << endl;
    for (deque<int>::iterator it = d1.begin(); it != d1.end(); it++)
    {
        cout << *it << " ";
    }

    sort(d1.begin(), d1.end());
    cout << endl;
    //排序后
    cout << "从小到大排序后：" << endl;
    for (deque<int>::iterator it = d1.begin(); it != d1.end(); it++)
    {
        cout << *it << " ";
    }

    //反向迭代器
    sort(d1.rbegin(), d1.rend());
    cout << endl;
    //排序后
    cout << "从大到小排序后：" << endl;
    for (deque<int>::iterator it = d1.begin(); it != d1.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}