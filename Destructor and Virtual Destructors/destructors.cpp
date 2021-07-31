#include <iostream>
using namespace std;
//can have multiple constructors but only 1 destructor
class Demo
{
public:
    int *p;
    Demo()
    {
        p = new int[10];
        cout << "Constructor of Demo." << endl;
    }
    ~Demo()
    {
        delete[] p; //deletes the array also
        cout << "Destructor of Demo." << endl;
    }
};
int main()
{
    Demo d;
    //when using heap:destructor isnt called auto
    Demo *p = new Demo();
    delete p;
}