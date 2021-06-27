#include <iostream>
using namespace std;
// redifining a function of parent class inside child class
class Parent
{
public:
    void display()
    {
        cout << "Display of Parent Class";
    }
};
class Child : public Parent
{
public:
    void display()
    { //redefining display() inside Child class
        cout << "Display of Child Class";
    }
};
int main()
{
    Parent p;
    p.display();
    Child c;
    c.display();
}
