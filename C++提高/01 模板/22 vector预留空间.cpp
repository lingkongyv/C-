#include <iostream>
#include <vector>
using namespace std;

int main22() {
    // 方法1：不使用预留空间
    vector<int> v1;
    int count1 = 0;

    for (int i = 0; i < 5; i++) {
        int old_cap = v1.capacity();
        v1.push_back(i);
        if (v1.capacity() != old_cap) {
            count1++;
        }
    }
    cout << "未使用reserve: 扩容 " << count1 << " 次" << endl;

    // 方法2：使用预留空间
    vector<int> v2;
    int count2 = 0;

    v2.reserve(5);  // 关键！

    for (int i = 0; i < 5; i++) {
        int old_cap = v2.capacity();
        v2.push_back(i);
        if (v2.capacity() != old_cap) {
            count2++;
        }
    }
    cout << "使用reserve: 扩容 " << count2 << " 次" << endl;

    cout << "\n结论: reserve() ";
    if (count1 > count2) {
        cout << "可以减少内存开辟次数，提高效率！";
    }
    else {
        cout << "效果不明显";
    }

    return 0;
}