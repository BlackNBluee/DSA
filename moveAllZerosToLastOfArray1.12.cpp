#include<iostream>
using namespace std;
void leftRotate(int a[], int d){
	int n=6-d;
	for(int i=0;i<6-d;i++){
		int temp = a[(i+n)%6];
		a[(i+n)%6]=a[i];
		a[i]=temp;
	}
	for(int i=0;i<6;i++){
		cout<<a[i]<<endl;
	}
}

int main(){
	int arr[]={1,2,3,4,5,6};
	leftRotate(arr, 3);		//left rotating by 3
	return 0;
}