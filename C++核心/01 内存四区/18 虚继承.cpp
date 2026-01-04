#include <iostream>
#include <string>

using namespace std;

//虚继承解决菱形继承

// 基类：动物
class Animal {
protected:
    string name;
    int age;

public:
    Animal(const string& n, int a) : name(n), age(a) {
        cout << "Animal构造函数被调用: " << name << endl;
    }

    virtual ~Animal() {
        cout << "Animal析构函数被调用: " << name << endl;
    }

    void eat() const {
        cout << name << " 正在吃东西" << endl;
    }

    string getName() const { return name; }
    int getAge() const { return age; }
};

// 哺乳动物类 - 使用虚继承
class Mammal : virtual public Animal {
protected:
    bool hasFur;

public:
    Mammal(const string& n, int a, bool fur)
        : Animal(n, a), hasFur(fur) {
        cout << "Mammal构造函数被调用: " << n << endl;
    }

    virtual ~Mammal() {
        cout << "Mammal析构函数被调用: " << name << endl;
    }

    void giveBirth() const {
        cout << name << " 是胎生动物" << endl;
    }

    bool hasFurCoat() const { return hasFur; }
};

// 鸟类 - 使用虚继承
class Bird : virtual public Animal {
protected:
    double wingspan;

public:
    Bird(const string& n, int a, double span)
        : Animal(n, a), wingspan(span) {
        cout << "Bird构造函数被调用: " << n << endl;
    }

    virtual ~Bird() {
        cout << "Bird析构函数被调用: " << name << endl;
    }

    void fly() const {
        cout << name << " 正在飞行，翼展: " << wingspan << "米" << endl;
    }

    double getWingspan() const { return wingspan; }
};

// 鸭嘴兽类 - 同时继承Mammal和Bird
class Platypus : public Mammal, public Bird {
private:
    bool hasBeak;

public:
    // 注意：由于使用虚继承，Animal的构造函数由Platypus直接调用
    Platypus(const string& n, int a, bool fur, double span, bool beak)
        : Animal(n, a),  // 直接初始化Animal
        Mammal(n, a, fur),
        Bird(n, a, span),
        hasBeak(beak) {
        cout << "Platypus构造函数被调用: " << n << endl;
    }

    ~Platypus() {
        cout << "Platypus析构函数被调用: " << name << endl;
    }

    void layEggs() const {
        cout << name << " 是产卵的哺乳动物" << endl;
    }

    void displayInfo() const {
        cout << "\n=== 鸭嘴兽信息 ===" << endl;
        cout << "名字: " << getName() << endl;
        cout << "年龄: " << getAge() << "岁" << endl;
        cout << "有皮毛: " << (hasFurCoat() ? "是" : "否") << endl;
        cout << "翼展: " << getWingspan() << "米" << endl;
        cout << "有喙: " << (hasBeak ? "是" : "否") << endl;
    }
};


int main18() {
    cout << "========== 使用虚继承的示例 ==========" << endl;
    {
        Platypus perry("佩里", 5, true, 0.5, true);

        perry.displayInfo();
        cout << "\n调用成员函数：" << endl;
        perry.eat();        // 没有二义性
        perry.giveBirth();  // 来自Mammal
        perry.fly();        // 来自Bird
        perry.layEggs();    // Platypus特有

        // 使用基类指针访问
        cout << "\n使用基类指针访问：" << endl;
        Animal* animalPtr = &perry;
        cout << "通过Animal指针: " << animalPtr->getName() << endl;

        Mammal* mammalPtr = &perry;
        cout << "通过Mammal指针: " << mammalPtr->getName() << endl;

        Bird* birdPtr = &perry;
        cout << "通过Bird指针: " << birdPtr->getName() << endl;
    }

    return 0;
}