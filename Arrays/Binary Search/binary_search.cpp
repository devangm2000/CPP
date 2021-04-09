//array needs to be sorted
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
	//sorting the array
	int temp;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(A[i]>A[j]){
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}
	int key;
	cout<<"Enter the element to be found:";
	cin>>key;
	
	int l=0,h=n;
	while(l<=h){
		int mid=(l+h)/2;
		if(key==A[mid]){
			cout<<"Element found at:"<<mid;
			return 0;
		}
		else if(key<A[mid]){
			h=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	cout<<"Not Found";
	return 0;
}

