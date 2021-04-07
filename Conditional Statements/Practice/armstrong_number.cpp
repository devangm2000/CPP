//armstrong number: addition of cube of each digit is same as number e.g 153
//1^3 + 5^3 + 3^3=153

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number:";
	cin>>n;
	int a,sum=0;
	int m=n; //another variable used as n changes later
	while(n>0){
		a=n%10;
		n=n/10;
		sum+=(a*a*a);
	}
	if(sum==m){
		cout<<"Armstrong number";
	}
	else{
		cout<<"Not an armstrong number";
	}
}

