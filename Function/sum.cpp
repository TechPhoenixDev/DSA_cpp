//calculate value from 1 to n.
#include<iostream>
using namespace std;
int SumOfNumber(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum +=i;
    }
    return sum;
}
int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    int Total = SumOfNumber(num);
    cout<<"The sum of the number is "<<Total;
    return 0;
}