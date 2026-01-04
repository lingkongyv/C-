#include <iostream>
#include <string>
using namespace std;

// 基类（父类） - Animal
class Animal {
protected:
    string name;
    int age;

public:
    // 构造函数
    Animal(string n = "未知动物", int a = 0) : name(n), age(a) {
        cout << "Animal构造函数被调用: " << name << endl;
    }

    // 虚析构函数（重要！）
    virtual ~Animal() {
        cout << "Animal析构函数被调用: " << name << endl;
    }

    // 虚函数（实现多态）
    virtual void makeSound() const {
        cout << name << "发出声音" << endl;
    }

    // 普通成员函数
    void eat() const {
        cout << name << "正在吃东西" << endl;
    }

    // 获取信息
    virtual void displayInfo() const {
        cout << "动物名称: " << name << ", 年龄: " << age << "岁" << endl;
    }
};

// 派生类（子类） - Dog
class Dog : public Animal {  // 公有继承
private:
    string breed;  // 品种

public:
    // 构造函数，调用基类构造函数
    Dog(string n = "小狗", int a = 0, string b = "未知品种")
        : Animal(n, a), breed(b) {
        cout << "Dog构造函数被调用: " << name << endl;
    }

    ~Dog() override {
        cout << "Dog析构函数被调用: " << name << endl;
    }

    // 重写（覆盖）基类的虚函数
    void makeSound() const override {
        cout << name << "（品种: " << breed << "）汪汪叫！" << endl;
    }

    // 新增成员函数
    void wagTail() const {
        cout << name << "正在摇尾巴" << endl;
    }

    // 重写显示信息
    void displayInfo() const override {
        Animal::displayInfo();  // 调用基类方法
        cout << "品种: " << breed << endl;
    }
};

int main14() {
    cout << "========== 继承的基本使用 ==========" << endl;

    // 创建基类对象
    Animal animal("普通动物", 3);
    animal.makeSound();
    animal.eat();
    animal.displayInfo();
    cout << endl;

    cout << "========== 单继承示例 ==========" << endl;
    Dog dog("旺财", 2, "金毛");
    dog.makeSound();      // 调用重写的虚函数
    dog.eat();            // 继承自基类
    dog.wagTail();        // 派生类新增方法
    dog.displayInfo();    // 调用重写的显示方法
    cout << endl;

    cout << "========== 多态性演示 ==========" << endl;
    Animal* animals[2];
    animals[0] = new Dog("小黑", 1, "泰迪");
    animals[1] = new Animal("未知", 1);

    for (int i = 0; i < 2; i++) {
        animals[i]->makeSound();  // 多态：根据实际对象类型调用相应函数
        animals[i]->displayInfo();
        cout << endl;
    }

    // 清理内存
    for (int i = 0; i < 2; i++) {
        delete animals[i];
    }

    return 0;
}