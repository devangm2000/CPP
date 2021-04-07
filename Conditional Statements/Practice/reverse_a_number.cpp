#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number:";
	cin>>n;
	cout<<"The number in reverse:";
	int a;
	int newnumber=0;
	while(n>0){
		a=n%10;
		n=n/10;
		newnumber=newnumber*10+a;
	}
	cout<<newnumber;
}
