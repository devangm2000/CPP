#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number:";
	cin>>n;
	int m=n;
	int a;
	int newnumber=0;
	while(n>0){
		a=n%10;
		n=n/10;
		newnumber=newnumber*10+a;
	}
	if(newnumber==m){
		cout<<"Palindrome";
	}
	else{
		cout<<"Not a palindrome";
	}
}
