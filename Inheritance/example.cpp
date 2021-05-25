#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    void setLength(int l) { length = l; }
    void setBreadth(int b) { breadth = b; }
    int getLength() { return length; }
    int getBreadth() { return breadth; }
    int area() { return length * breadth; }
    int perimeter() { return 2 * (length + breadth); }
};
class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid()
    {
        height = 0;
    }
    Cuboid(int l, int b, int h)
    {
        setLength(l);
        setBreadth(b);
        setHeight(h);
    }
    void setHeight(int h)
    {
        height = h;
    }
    int getHeight() { return height; }
    int volume()
    {
        return getLength() * getBreadth() * getHeight();
    }
};
int main()
{
    Cuboid c(20, 10, 5);
    cout << c.getLength() << endl;
    cout << c.getBreadth() << endl;
    cout << c.getHeight() << endl;
    cout << c.perimeter() << endl;
    cout << c.area() << endl;
    cout << c.volume() << endl;
}