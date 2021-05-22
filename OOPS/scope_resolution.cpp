#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l = 0, int b = 0);
    int area();
    int perimeter();
    //if we write the whole function inside class, then it is an inline function
    //if we write inline infront of function name but define it outside, even then it is inline funcition
    //inline int perimter();     ->inline function
};
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
int Rectangle::area()
{
    return length * breadth;
}
int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}
int main()
{
    Rectangle r(10, 5);
    cout << r.area() << " " << r.perimeter();
}