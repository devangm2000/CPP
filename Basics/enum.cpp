#include <iostream>
using namespace std;
enum day
{
    //act like constants under one name
    //from 0 unless specified
    mon = 1,
    tue,
    wed,
    thu,
    fri = 7,
    sat,
    sun
    //sat=8 and sun=9
};
int main()
{
    day d;
    d = fri;
    //asigns the value and prints that
    cout << d;
}
