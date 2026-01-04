#include <iostream>
using namespace std;

// const修饰成员函数 常函数
class Person
{
public:
	Person(int a, int b) : m_A(a), m_B(b){}
    // 常函数：保证函数体内不修改成员属性
    void showPerson() const
    {
        // m_A = 100; // 错误，常函数不能修改成员属性
		this->m_B = 200; // 正确，mutable修饰的成员属性可以在常函数中修改
        cout << "m_A = " << m_A << endl;
        cout << "m_B = " << m_B << endl;
    }
    void func()
    {
        cout << "m_A = " << m_A << endl;
	}
private:
    int m_A;
    mutable int m_B;
};

int main11()
{
	const Person p(10, 20); // 常对象
	p.showPerson();
    
	// 常对象只能调用常函数
    //p.func();   //报错


    system("pause");
    return 0;
}
