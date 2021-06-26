#include <iostream>
using namespace std;
class Base
{
public:
    void func1()
    {
        cout << "Func1";
    }
    void func2()
    {
        cout << "Func2";
    }
    void func3();
};
class Derived : public Base
{
public:
    void func4();
    void func5();
};
int main()
{
    Base *ptr;         //ptr is Base class
    ptr = new Derived; //object is Derived class
    //hence only methods from Base class can be called
    ptr->func1();
    //ptr->func4();   =error
    //opposite is not possible, cannot create Base class Object and Derived class Pointer
}