// reverse an array 
#include<iostream>
using namespace std;
void reverseArray(int arr[],int sz){
    int start =0,end=sz-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr [end];
        arr[end]=temp;
        start++,end--;
    }
}

int main(){
    int arr[]= {3,4,56,43,35,74,9};
    int sz = 7;
    reverseArray(arr,sz);
       for(int i =0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}