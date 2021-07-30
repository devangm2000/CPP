#include <iostream>
using namespace std;
#define a 10;
class demo
{
public:
    int n = 50;
    void display() const
    {
        // n++; //wont work then(i.e writing const so that updation does not work)
        cout << "Inside class:" << n << endl;
    }
    void display2(const int &e, int &f) //writing const inside so that c and d values cannot be updated
    {
        // ++c;//wont work
        cout << e << " " << f << endl;
    }
};
int main()
{
    const int x = 10;
    // x++;  //wont work
    cout << x << endl; //value=10

    //using a pointer to constant data(const written along with pointer and not data)
    int y = 20;
    const int *ptr = &y;
    // ++*ptr; //wont work
    cout << *ptr << endl;
    //can be written as int const *ptr also
    int z = 30;
    ptr = &z; //made ptr point to z but cant change z value also(whatever we point to, its value wont change)
    cout << *ptr << endl;

    //constant ptr in such cases can only point to a single variable
    //earlier data was constant but now pointer is constant
    int *const ptr1 = &y;
    cout << "Constant Pointer:" << *ptr1 << endl;

    //pointer and data both are constant i.e both cant be changed
    const int *const ptr2 = &x;
    cout << *ptr << endl;

    demo d;
    d.display();
    int e = 10;
    int f = 100;
    d.display2(e, f);
}
