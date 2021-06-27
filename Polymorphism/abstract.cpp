#include <iostream>
using namespace std;
//car is an abstract class- cannot create an object but only a pointer to Derived class
//abstract classes have atleast one pure virtual function
class car
{
public:
    virtual void start() = 0; //pure virtual functions
    virtual void stop() = 0;
};
class Innova : public car
{
    void start()
    {
        cout << "Innova Started";
    }
    void stop()
    {
        cout << "Innova Stopped";
    }
};
class Swift : public car
{
    void start()
    {
        cout << "Swift Started";
    }
    void stop()
    {
        cout << "Swift Stopped";
    }
};
int main()
{
    car *c = new Innova;
    c->start();
    c = new Swift;
    c->stop();
}