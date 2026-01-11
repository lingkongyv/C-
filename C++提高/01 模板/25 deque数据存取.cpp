#include <iostream>
#include <deque>
using namespace std;

int main25() {
    deque<int> d1;
    d1.push_back(1);
    d1.push_back(3);
    d1.push_back(4);
    d1.push_back(25);


    d1[2] = 12;
    cout << d1.at(2) << endl;

    cout << "第一个元素为：" << d1.front() << endl;
    cout << "最后一个元素为：" << d1.back() << endl;


    return 0;
}