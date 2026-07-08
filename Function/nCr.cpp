#include<iostream>
using namespace std;
int fact (int a){
    int result=1;
    for(int i=a;i>1;i--){
        result *=i;
    }
    return result;
}

int main(){
    int n,r;
    cout<<"enter n= ";
    cin>>n;
    cout<<"enter r= ";
    cin>>r;
    int nCr =  (fact(n))/((fact(r))*(fact(n-r)));
    cout<<"ans is : "<< nCr;
    return 0;
}