#include<iostream>
using namespace std;

void moveZero(int a[]){
	int zeros=0;
	for(int i=0;i<6;i++){
		if(a[i]==0){
			zeros++;
		}
		else if(a[i]!=0 && zeros!=0){
			a[i-zeros]=a[i];
			a[i]=0;
		}
	}
	for(int i=0;i<6;i++){
		cout<<a[i]<<endl;
	}
}

int main(){
	int arr[]={10,8,0,0,12,0};
	moveZero(arr);
	return 0;
}