#include <iostream>
using namespace std;
int main()
{
    try
    {
        throw "abcd efgh";
    }
    catch (int e)
    {
        cout << "Int:" << e;
    }
    catch (double e)
    {
        cout << "Double:" << e;
    }
    catch (...) //always at the end
    {
        cout << "Rest of the cases";
    }
}