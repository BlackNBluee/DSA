#include<iostream>
using namespace std;

int secondLargest(int a[]){
	int l=0,l2=-1;
	for(int i=1;i<5;i++){
		if(a[l]<a[i]){
			l2=l;
			l=i;
		}
		else if(a[l]>a[i] && a[l2]<a[i]){
			l2=i;
		}
		else if(a[l]==a[i] || a[l2]==a[i]){
			continue;
		}
	}
	return l2;
}

int main(){
	int arr[]={20,10,20,8,12};
	cout<<secondLargest(arr);
	return 0;
}