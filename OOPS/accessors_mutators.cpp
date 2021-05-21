#include <iostream>
using namespace std;
class Rectange
{
private:
    int length;
    int breadth;

public:
    // mutators(mutate the values i.e take input)
    void setBoth(int l, int b)
    {
        if (l > 0)
        {
            length = l;
        }
        else
        {
            length = 0;
            cout << "Incorrect input. Length set to 0"
                 << "\n";
        }
        if (b > 0)
        {
            breadth = b;
        }
        else
        {
            breadth = 0;
            cout << "Incorrect input. Breadth set to 0"
                 << "\n";
        }
    }
    // accessors(to access the values)
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    Rectange r;
    r.setBoth(-10, 5);
    cout << "Length:" << r.getLength() << endl;
    cout << "Breadth:" << r.getBreadth() << endl;
    cout << "Perimeter:" << r.perimeter() << endl;
    cout << "Area:" << r.area() << endl;
}