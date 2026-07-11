#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int start =0,ending=4;
  
    cout<<"The sub arrays are given below"<<endl;
    while(start<ending){
            
        for(int i = start;i<=ending;i++){

            for(int j=start;j<=i;j++){
                cout<< arr[j]<<" ";
            }
            cout<<endl;
        }
        start++;
    }
    return 0;
}