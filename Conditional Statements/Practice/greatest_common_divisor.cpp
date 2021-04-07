//HCF
#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter 2 nos:";
	int m,n;
	cin>>m>>n;
	while(m!=n){
		if(m>n){
			m=m-n;
		}
		else if(n>m){
			n=n-m;
		}
	}
	cout<<"HCF is:"<<m;
}
