#include <iostream>
using namespace std;
class Parent
{
private:
    int a;

protected:
    int b;

public:
    int c;
    void funcParent()
    {
        a = 10;
        b = 15;
        c = 20;
    }
};
class Child : protected Parent //now public and protected from Parent will be stored in protected of Child
{
public:
    void funcChild()
    {
        b = 15; //can access only b and c but not a as theyre protected and public in Parent
        c = 20;
    }
};
class grandchild : private Child //now public and protected of Child is being stored in private of grandchild
{
public:
    void funcGrandchild()
    {
        b = 15; //can access b and c as they're members of protected in Child
        c = 20;
    }
};
int main()
{
    grandchild c;
    // c.a=10;    //all 5 are errors as they are private members of grandchild
    // c.b=10;
    // c.c=10;
    // c.funcParent();
    // c.funcChild();
    c.funcGrandchild();
}