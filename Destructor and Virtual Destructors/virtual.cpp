#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Constructor of Base." << endl;
    }
    virtual ~Base()
    {
        cout << "Destructor of Base." << endl;
    }
};
class Derived : public Base
{
public:
    Derived()
    {
        cout << "Constructor of Derived." << endl;
    }
    ~Derived()
    {
        cout << "Destructor of Derived." << endl;
    }
};
int main()
{
    // Derived d;
    ////Destructor of derived is executed before destructor of base
    // Constructors-top to bottom   Destructors-bottom to top

    //using base class pointer and derived class object
    Base *p = new Derived();
    delete p;
    //only destructor of base class will execute
    //to make both execute:make base class destructor a virtual class
    // virtual destructors:only useful in BCP-DCO case
}