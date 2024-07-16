#include<iostream>
using namespace std;

int removeDuplicate(int a[]){
	int duplicates=0;
	for(int i=0;i<6;i++){
		if(a[i]==a[i+1]){
			duplicates++;
		}
		else if(a[i]!=a[i+1]&&duplicates!=0){
			a[i+1-duplicates]=a[i+1];
		}
	}
	return 6-duplicates;
}

int main(){
	int arr[]={1,2,2,3,3,3};
	cout<<removeDuplicate(arr);
	return 0;
}