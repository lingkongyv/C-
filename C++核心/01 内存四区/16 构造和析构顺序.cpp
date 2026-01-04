#include <iostream>
#include <string>
using namespace std;

//继承中，先调用父类构造函数，再调用子类构造函数
//析构顺序和构造相反

class Base {
protected:
    string name;
public:
    Base(string n) : name(n) {
        cout << "Base构造函数: " << name << endl;
    }
    virtual ~Base() {
        cout << "Base析构函数: " << name << endl;
    }
};

class Derived1 : public Base {
public:
    Derived1(string n) : Base("Base for " + n), derivedName(n) {
        cout << "Derived1构造函数: " << derivedName << endl;
    }
    ~Derived1() {
        cout << "Derived1析构函数: " << derivedName << endl;
    }
private:
    string derivedName;
};

class Derived2 : public Derived1 {
public:
    Derived2(string n) : Derived1("Derived1 for " + n), derived2Name(n) {
        cout << "Derived2构造函数: " << derived2Name << endl;
    }
    ~Derived2() {
        cout << "Derived2析构函数: " << derived2Name << endl;
    }
private:
    string derived2Name;
};

// 测试成员对象的构造顺序
class Member {
public:
    Member(string n) : name(n) {
        cout << "Member构造函数: " << name << endl;
    }
    ~Member() {
        cout << "Member析构函数: " << name << endl;
    }
private:
    string name;
};

class WithMember : public Base {
public:
    WithMember(string n) : Base("Base for " + n), member1("Member1"), member2("Member2"), derivedName(n) {
        cout << "WithMember构造函数: " << derivedName << endl;
    }
    ~WithMember() {
        cout << "WithMember析构函数: " << derivedName << endl;
    }
private:
    Member member1;
    Member member2;
    string derivedName;
};

int main16() {
    cout << "========== 多层继承构造析构顺序 ==========" << endl;
    {
        cout << "\n创建Derived2对象:" << endl;
        Derived2 obj("多层对象");
        cout << "\n对象创建完成" << endl;
    }
    cout << "\n对象已销毁" << endl;

    cout << "\n========== 带成员对象的构造析构顺序 ==========" << endl;
    {
        cout << "\n创建WithMember对象:" << endl;
        WithMember obj("带成员对象");
        cout << "\n对象创建完成" << endl;
    }
    cout << "\n对象已销毁" << endl;

    return 0;
}