#include<iostream>
using namespace std;
int main(){
    int arr[]={7,-2,3,8,-4,-1};
    int n = 6;
    int maxSum = INT_MIN;
    for(int start=0;start<n;start++){
        int sum=0;
        for(int end=start;end<n;end++){
            sum += arr[end];
            maxSum=max(maxSum,sum);
        }
    }
    cout<<maxSum;
    return 0;
}