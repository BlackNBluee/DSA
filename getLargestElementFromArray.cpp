#include<iostream>
using namespace std;

int getLargest(int a[]){
    int flag=0, pos;
    for(int i=1;i<4;i++){
        if(a[flag]<a[i]){
            flag=i;
        }
    }
    return flag;
}

int main(){
    int arr[]={5,8,20,10};
    std::cout<<getLargest(arr);
    return 0;
}
