#include <iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int breadth;
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    int area()
    {
        return length * breadth;
    }
};
int main()
{
    Rectangle r;
    Rectangle *ptr;
    ptr = &r;
    //r.length = 10;
    ptr->length = 10;
    ptr->breadth = 5;
    cout << r.perimeter() << " " << r.area() << endl;
}