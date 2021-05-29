#include <iostream>
using namespace std;
// access specifiers-private,public,protected
//inside class-all 3 accessible
//inside derived class- only private and public
//on object- only public
class Rectangle
{
private:
    int length;

protected:
    int breadth;

public:
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    void setBoth(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
};
class Cuboid : public Rectangle
{
    //cant access private members of Rectangle
    //use accessors and mutators for it
    //can access protected members in derived class
private:
    int height;

public:
    void setHeight(int h)
    {
        height = h;
    }
    int volume()
    {
        return getLength() * breadth * height;
    }
};
int main()
{
    Cuboid r;
    r.setBoth(10, 5);
    r.setHeight(10);
    cout << r.volume();
}