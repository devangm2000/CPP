#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    //parameterized constructor
    //same as non-parameterized constructor since default values are defined
    Rectangle(int l = 0, int b = 0)
    {
        length = l;
        breadth = b;
    }
    //copy constructor-takes another object and copies its values
    //if in the original constructor, we have defined a pointer to an array =>
    //then pointer in the copy constructor should point to its own array(i.e a copy) and not to the original array
    Rectangle(Rectangle &rect)
    {
        length = rect.length;
        breadth = rect.breadth;
    }
    int area()
    {
        return length * breadth;
    }
};
int main()
{
    Rectangle r(10, 5);
    cout << r.area() << endl;
    Rectangle r1(r); //copy constructor
    cout << r1.area() << endl;
}