#include <iostream>
#include <string>
using namespace std;

// 1. 全局函数做友元
class Building1 {
    // 声明全局函数为友元
    friend void visitBuilding1(Building1* building);
    
private:
    string bedroom;  // 私有成员
public:
    string livingroom;  // 公有成员
    Building1() {
        livingroom = "客厅";
        bedroom = "卧室";
    }
};

// 全局函数
void visitBuilding1(Building1* building) {
    cout << "全局函数正在访问：" << building->livingroom << endl;
    cout << "全局函数正在访问：" << building->bedroom << endl;  // 可以访问私有成员
}

// 2. 类做友元
class Building2;

// 好友类
class GoodFriend {
public:
    void visitBuilding2(Building2* building);
    void visitBuilding2_2(Building2* building);
};

class Building2 {
    // 声明GoodFriend类为友元类
    friend class GoodFriend;
    
private:
    string bedroom;
public:
    string livingroom;
    Building2() {
        livingroom = "客厅";
        bedroom = "卧室";
    }
};

// GoodFriend类的成员函数实现
void GoodFriend::visitBuilding2(Building2* building) {
    cout << "好友类正在访问：" << building->livingroom << endl;
    cout << "好友类正在访问：" << building->bedroom << endl;  // 可以访问私有成员
}

void GoodFriend::visitBuilding2_2(Building2* building) {
    cout << "好友类的另一个函数正在访问：" << building->bedroom << endl;  // 也可以访问
}

// 3. 成员函数做友元
class Building3;

// 好友类
class GoodFriend2 {
public:
    void visitBuilding3(Building3* building);  // 只有这个函数是友元
    void visitBuilding3_2(Building3* building);  // 这个函数不是友元
};

class Building3 {
    // 只声明GoodFriend2类的visitBuilding3成员函数为友元
    friend void GoodFriend2::visitBuilding3(Building3* building);
private:
    string bedroom;
public:
    string livingroom;
    Building3() {
        livingroom = "客厅";
        bedroom = "卧室";
    }
};
 
// GoodFriend2类的成员函数实现
void GoodFriend2::visitBuilding3(Building3* building) {
    cout << "好友类的特定函数正在访问：" << building->livingroom << endl;
    cout << "好友类的特定函数正在访问：" << building->bedroom << endl;  // 可以访问私有成员
}

void GoodFriend2::visitBuilding3_2(Building3* building) {
    cout << "好友类的另一个函数正在访问：" << building->livingroom << endl;
    // cout << building->bedroom << endl;  // 错误！不能访问私有成员
}

int main12()
{
    cout << "=== 1. 全局函数做友元 ===" << endl;
    Building1 b1;
    visitBuilding1(&b1);
    
    cout << "\n=== 2. 类做友元 ===" << endl;
    Building2 b2;
    GoodFriend friend1;
    friend1.visitBuilding2(&b2);
    friend1.visitBuilding2_2(&b2);
    
    cout << "\n=== 3. 成员函数做友元 ===" << endl;
    Building3 b3;
    GoodFriend2 friend2;
    friend2.visitBuilding3(&b3);
    friend2.visitBuilding3_2(&b3);
    
    system("pause");
    return 0;
}