#include <iostream>
using namespace std;
class car
{
public:
    //want these functions for achieving polymorphism so no need to define them in parent class- like abstract classes
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