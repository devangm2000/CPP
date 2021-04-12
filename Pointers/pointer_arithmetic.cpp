#include <iostream>
using namespace std;
int main()
{
    //arithmetic operations:
    // 1. p++
    // 2. p--
    // 3. p=p+n
    // 4. p=p-n
    // 5. d=q-p or p-q i.e subtraction of 2 pointers (gives the distance between them; can be negative also)
    int A[5] = {2, 4, 6, 8, 10};
    int *p = A;
    cout << *p << endl;
    p++;
    cout << *p << endl;
    p--;
    cout << *p << endl;
    p += 3;
    cout << *p << endl;
    p -= 2;
    cout << *p << endl;
    int *q = &A[4];
    cout << q - p << endl; //distance
    int *r = &A[0];
    cout << r - p << endl; //negative distance
    return 0;
}