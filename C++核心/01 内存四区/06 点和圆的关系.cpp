#include<iostream>
#include<cmath>
using namespace std;

class Point
{
private:
    int x, y;
public:
    //初始化列表
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    int getX() const { return x; }
    int getY() const { return y; }

    void showPoint() const {
        cout << "Point(" << x << "," << y << ")" << endl;
    }
};

class Circle
{
private:
    Point center;
    int radius;
public:
    Circle(const Point& c, int r = 0) : center(c), radius(r) {
        if (r < 0) radius = 0;
    }

    Circle(int x, int y, int r = 0) : center(x, y), radius(r) {
        if (r < 0) radius = 0;
    }

    void showCircle() const {
        cout << "Circle - Center: ("
            << center.getX() << "," << center.getY()
            << "), Radius: " << radius << endl;
    }

    bool isPointInCircle(const Point& p) const {
        int dx = p.getX() - center.getX();
        int dy = p.getY() - center.getY();
        return dx * dx + dy * dy < radius * radius;
    }

    bool isPointOnCircle(const Point& p) const {
        int dx = p.getX() - center.getX();
        int dy = p.getY() - center.getY();
        int distanceSquared = dx * dx + dy * dy;
        return abs(distanceSquared - radius * radius) <= 1;
    }
};

int main6()
{
    Point p1(1, 2);
    Point center1(3, 4);
    Circle c1(center1, 5);

    p1.showPoint();
    c1.showCircle();

    if (c1.isPointInCircle(p1))
        cout << "Point is inside the circle" << endl;
    else if (c1.isPointOnCircle(p1))
        cout << "Point is on the circle" << endl;
    else
        cout << "Point is outside the circle" << endl;

	system("pause");
    return 0;
}