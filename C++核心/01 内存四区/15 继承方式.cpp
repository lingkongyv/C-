#include <iostream>
using namespace std;

class Base {
public:
    int publicVar = 10;
protected:
    int protectedVar = 20;
private:
    int privateVar = 30;  // 派生类无法访问

public:
    void show() {
        cout << "Base: public=" << publicVar
            << ", protected=" << protectedVar
            << ", private=" << privateVar << endl;
    }
};

// 公有继承
class PublicDerived : public Base {
public:
    void accessMembers() {
        publicVar = 100;      // 可以访问
        protectedVar = 200;   // 可以访问
        // privateVar = 300;  // 不能访问
        cout << "公有继承 - 子类可以访问父类的public和protected成员" << endl;
    }
};

// 保护继承
class ProtectedDerived : protected Base {
public:
    void accessMembers() {
        publicVar = 100;      // 可以访问，但变成protected
        protectedVar = 200;   // 可以访问
        // privateVar = 300;  // 不能访问
        cout << "保护继承 - 子类可以访问父类的public和protected成员，但它们都变成protected" << endl;
    }

    // 重新公开基类的public成员
    using Base::show;
};

// 私有继承
class PrivateDerived : private Base {
public:
    void accessMembers() {
        publicVar = 100;      // 可以访问，但变成private
        protectedVar = 200;   // 可以访问，但变成private
        // privateVar = 300;  // 不能访问
        cout << "私有继承 - 子类可以访问父类的public和protected成员，但它们都变成private" << endl;
    }

    // 重新公开基类的public成员
    using Base::show;
};

int main15() {
    cout << "========== 继承方式演示 ==========" << endl;

    Base base;
    base.show();
    cout << endl;

    PublicDerived pubDerived;
    cout << "公有继承示例：" << endl;
    pubDerived.accessMembers();
    pubDerived.show();  // 公有继承：基类的public成员在派生类中还是public
    cout << "可以直接访问基类的public成员: " << pubDerived.publicVar << endl;
    cout << endl;

    ProtectedDerived protDerived;
    cout << "保护继承示例：" << endl;
    protDerived.accessMembers();
    protDerived.show();  // 保护继承：我们重新公开了show方法
    // cout << protDerived.publicVar << endl; // 错误！publicVar在派生类中是protected
    cout << endl;

    PrivateDerived privDerived;
    cout << "私有继承示例：" << endl;
    privDerived.accessMembers();
    privDerived.show();  // 私有继承：我们重新公开了show方法
    // cout << privDerived.publicVar << endl; // 错误！publicVar在派生类中是private

    return 0;
}