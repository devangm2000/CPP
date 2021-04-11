#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int *p = &x; //initialisation
    cout << x << endl;
    cout << &x << endl;
    cout << p << endl;  //address of x stored in p
    cout << &p << endl; //address of p
    cout << *p;         //dereferencing:prints the value of x
    //dereferencing: through p[n] also possible for arrays

    int A[5] = {1, 2, 3, 4, 5};
    int *q;
    q = A;     //same as below(no need to write & if referring to base address of array)
    q = &A[0]; //same as above
    q = &A[3]; //not base address hence using &
}