#include <iostream>
using namespace std;
int main()
{
    int *p = new int[10]; //created in heap
    p[0] = 1;
    p[1] = 2;
    cout << p[1] << endl;

    delete[] p;  //deleting the array in heap
    p = nullptr; //use this and not NULL

    //changing the size of an array in heap is possible
    //not possible for array in stack
    int *A = new int[20];
    delete[] A;      //better to delete else memory leak
    A = new int[40]; //size is 40 now
}