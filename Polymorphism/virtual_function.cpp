#include <iostream>
using namespace std;
class Parent
{
public:
    virtual void display() //virtual method
    {
        cout << "Display of Parent Class";
    }
};
class Child : public Parent
{
public:
    void display() //redefined
    {
        cout << "Display of Child Class";
    }
};
int main()
{
    Parent *ptr = new Child; //Base Class Pointer-Derived Class Object
    ptr->display();          //Parent class methods can only be accessed even though redefined in Child class
    //if we define a virtual method then Child class methods will be accessed and not Parent class methods
}
