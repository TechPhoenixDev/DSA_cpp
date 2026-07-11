#include<iostream>
using namespace std;
int main(){
    int arr[] ={3,- 4,5,4,-1,7,-8};
    int n = 7;
    int sum =0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        sum += arr[i];
        maxi=max(sum,maxi);
        if(sum<0){
            sum = 0;
        }
    } 
    cout<<"the maximum sum of subarray: "<<maxi<<endl;
    return 0;
}