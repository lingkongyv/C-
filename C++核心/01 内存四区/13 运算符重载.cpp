#include <iostream>
using namespace std;

class Complex { 
private:
    double real;  // 实部
    double imag;  // 虚部

public:
    // 构造函数
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // 1. 成员函数重载运算符
    //第一个const（在Complex&之前） 表示该函数不会修改调用它的对象
    //第二个const（在函数声明末尾） 表示传入的参数other不会被修改。
    //使用引用（&）传递参数可以避免不必要的拷贝，提高效率。

    // 重载 + 运算符（两个复数相加）
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // 重载 - 运算符（两个复数相减）
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // 重载 * 运算符（两个复数相乘）
    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag,
            real * other.imag + imag * other.real);
    }

    // 重载 += 运算符
    Complex& operator+=(const Complex& other) {
        real += other.real;
        imag += other.imag;
        return *this;
    }

    // 重载 == 运算符
    bool operator==(const Complex& other) const {
        return (real == other.real) && (imag == other.imag);
    }

    // 重载 != 运算符
    bool operator!=(const Complex& other) const {
        return !(*this == other);
    }

    // 重载前置 ++ 运算符
    // 先自增，再使用
    Complex& operator++() {
        ++real;
        ++imag;
        return *this;
    }

    // 重载后置 ++ 运算符   
    // 形参里面有 int 参数（只是个占位符）用于区分前置++和后置++运算符。
    // 先使用原值，再自增
    Complex operator++(int) {
		Complex temp = *this;  //记录当前本身的值
		++(*this);     // 调用前置++运算符 让本身的值加1
        return temp;   //返回原值
    }

    // 2. 友元函数重载运算符（用于非对称操作）

    // 重载 << 运算符（输出复数）
    friend ostream& operator<<(ostream& os, const Complex& c);

    // 重载 + 运算符（double + Complex）
    friend Complex operator+(double d, const Complex& c);

    // 重载 + 运算符（Complex + double）
    friend Complex operator+(const Complex& c, double d);
};


// 实现友元函数

// 成员函数实现不了 << 运算符，因为左操作数是ostream类型，不是Complex类型。 
// 重载 << 运算符（输出）   本质 operator<<(cout,c)  简化就是 cout<<c
// 形参里面的 os 可以变成 cout 或者其他名字， 因为是引用，起别名
ostream& operator<<(ostream& os, const Complex& c)    
{     
    os << c.real;      
    if (c.imag >= 0)
        os << " + " << c.imag << "i";
    else
        os << " - " << -c.imag << "i";
    return os;
	//为了可以连续输出，我们返回了输出流对象 os 的引用。
	//即为 cout 对象，这样可以实现链式输出。
}

// 重载 + 运算符（double + Complex）
Complex operator+(double d, const Complex& c) {
    return Complex(c.real + d, c.imag);
}

// 重载 + 运算符（Complex + double）
Complex operator+(const Complex& c, double d) {
    return Complex(c.real + d, c.imag);
}

// 测试主函数
int main13() {
    Complex c1(3, 4);  // 3 + 4i
    Complex c2(1, 2);  // 1 + 2i

    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << endl;

    // 测试加法
    Complex sum = c1 + c2;
    cout << "c1 + c2 = " << sum << endl;

    // 测试减法
    Complex diff = c1 - c2;
    cout << "c1 - c2 = " << diff << endl;

    // 测试乘法
    Complex product = c1 * c2;
    cout << "c1 * c2 = " << product << endl;

    // 测试+=运算符
    Complex c3 = c1;
    c3 += c2;
    cout << "c1 += c2 后，c3 = " << c3 << endl;

    // 测试比较运算符
    cout << "c1 == c2? " << (c1 == c2 ? "是" : "否") << endl;
    cout << "c1 != c2? " << (c1 != c2 ? "是" : "否") << endl;

    // 测试自增运算符
    Complex c4 = c2;
    cout << "++c4 = " << ++c4 << endl;
    cout << "c4++ = " << c4++ << endl;
    cout << "c4 = " << c4 << endl;

    // 测试double和Complex相加
    cout << "c1 + 5.5 = " << c1 + 5.5 << endl;
    cout << "5.5 + c1 = " << 5.5 + c1 << endl;

    system("pause");
    return 0;
}