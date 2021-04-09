#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the array size:";
	cin>>n;
	int A[n];
	cout<<"Enter the array elements:";
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	int key;
	cout<<"Enter the element to be found:";
	cin>>key;
	for(int i=0;i<n;i++){
		if(key==A[i]){
			cout<<"Key found at:"<<i;
			return 0;
		}
	}
	cout<<"Not found";
	return 0;
}
