#include<iostream>
using namespace std;
void reverseArray(int arr[],int n){
    int a= n-1;
    for(int i=0;i<n/2;i++){
        int temp = arr[i];
        arr[i]=arr[a];
        arr[a] = temp;
        a--;
    }
}
int main(){
    int arr[]={4,2,7,8,2,5};
    int sz=6;
    reverseArray(arr,sz);
    for(int i =0;i<sz;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}