#include <string>
#include <iostream>
using namespace std;
int main()
{
    // .length()
    // .size()  //same as length()
    string s = "Hello";
    cout << s.length() << endl;

    // .capacity()     //size of the array created
    cout << s.capacity() << endl;

    // .resize(n)        //resizing the array
    s.resize(50);
    cout << s.capacity() << endl;

    // .max_size()
    cout << s.max_size() << endl;

    // .clear()   //to clear the string
    s.clear();

    // .empty()
    s = "";
    if (s.empty())
    {
        cout << "Empty string" << endl;
    }
    else
    {
        cout << "Not empty" << endl;
    }
}