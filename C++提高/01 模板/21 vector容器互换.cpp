#include<iostream>
#include<vector>
using namespace std;

// 改进打印函数，增加容量信息
void printVectorInfo(const string& name, const vector<int>& v)
{
    cout << name << " - 元素: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
    cout << name << " - 大小: " << v.size()
        << ", 容量: " << v.capacity() << endl;
}

int main21()
{
    // 1. 演示swap交换两个vector
    vector<int> v1 = { 25, 45, 35 };
    vector<int> v2 = { 0, 5 };

    cout << "=== 交换前 ===" << endl;
    printVectorInfo("v1", v1);
    printVectorInfo("v2", v2);

    v1.swap(v2);

    cout << "\n=== 交换后 ===" << endl;
    printVectorInfo("v1", v1);
    printVectorInfo("v2", v2);

    // 2. 演示swap收缩内存
    cout << "\n=== 演示内存收缩 ===" << endl;

    // 创建一个容量较大的vector
    vector<int> bigVector;
    cout << "\n1. 添加50个元素：" << endl;
    for (int i = 0; i < 50; ++i) {
        bigVector.push_back(i);
    }
    printVectorInfo("bigVector", bigVector);

    // 删除大部分元素
    cout << "\n2. 删除大部分元素，保留4个：" << endl;
    bigVector.resize( 4);
    printVectorInfo("bigVector", bigVector);

    // 使用swap收缩内存
    cout << "\n3. 使用swap收缩内存后：" << endl;
    vector<int>(bigVector).swap(bigVector);  // 正确用法
    printVectorInfo("bigVector", bigVector);

    return 0;
}