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
    // Creating an object
    // Rectangle r;
    // Rectangle *ptr;
    // ptr = &r;

    // Without creating an initial object
    Rectangle *ptr;
    ptr = new Rectangle;

    ptr->length = 10; //r.length = 10;
    ptr->breadth = 5;
    cout << ptr->perimeter() << " " << ptr->area() << endl;
}