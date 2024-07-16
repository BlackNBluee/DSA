#include<iostream>
using namespace std;

void leader(int a[]){
	int largest=a[7-1];
	for(int i=6;i>=0;i--){
		if(i==6)	cout<<a[i]<<"\t"<<i<<endl;
		if(a[i]>largest){
			cout<<a[i]<<"\t"<<i<<endl;
			largest=a[i];
		}
	}
}

int main(){
	int arr[]={7,10,5,10,6,5,2};
	leader(arr);		//finding element next to which no element greater than itself
	return 0;
}