#include <iostream>
#include <string>
using namespace std;

// 基类1
class Printer {
public:
    void print(string text) const {
        cout << "打印: " << text << endl;
    }
};

// 基类2
class Scanner {
public:
    void scan() const {
        cout << "正在扫描..." << endl;
    }
};

// 基类3
class FaxMachine {
public:
    void sendFax(string message) const {
        cout << "发送传真: " << message << endl;
    }
};

// 多继承  一个儿子可以有多个爹
class MultiFunctionDevice : public Printer, public Scanner, public FaxMachine {
public:
    void copy() const {
        cout << "复印功能：" << endl;
        scan();
        cout << "处理扫描数据..." << endl;
        print("副本");
    }

    void showCapabilities() const {
        cout << "多功能设备功能列表：" << endl;
        cout << "1. 打印文档" << endl;
        cout << "2. 扫描文档" << endl;
        cout << "3. 发送传真" << endl;
        cout << "4. 复印文档" << endl;
    }
};

// 另一个例子：菱形继承问题
class A {
public:
    int value = 10;
    A() { cout << "A构造函数" << endl; }
    ~A() { cout << "A析构函数" << endl; }
};

class B : public A {
public:
    B() { cout << "B构造函数" << endl; }
    ~B() { cout << "B析构函数" << endl; }
};

class C : public A {
public:
    C() { cout << "C构造函数" << endl; }
    ~C() { cout << "C析构函数" << endl; }
};

class D : public B, public C {
public:
    D() {
        cout << "D构造函数" << endl;
        // 存在二义性：B::value 还是 C::value？
        // cout << value << endl; // 错误：对成员'value'的请求不明确
        cout << "B::value = " << B::value << endl;
        cout << "C::value = " << C::value << endl;
    }
    ~D() { cout << "D析构函数" << endl; }
};

int main17() {
    cout << "========== 多继承示例 ==========" << endl;

    MultiFunctionDevice mfd;
    mfd.showCapabilities();
    cout << endl;
    mfd.print("测试文档");
    mfd.scan();
    mfd.sendFax("重要通知");
    cout << endl;
    mfd.copy();

    cout << "\n========== 菱形继承问题 ==========" << endl;
    {
        D d;
        cout << "\nD对象包含两个A子对象，内存中有两份value" << endl;
    }

    return 0;
}