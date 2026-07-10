#include<iostream>
#include<vector>
using namespace std;
int main(){

    //initialize in 3 ways 
    vector<int>vec;
    vector<int >v2={2,3,5};
    vector<int>v3(3,0);//{0,0,0}
    cout<<v2[1]<<endl;
    cout << v3[3]<<endl;

    return 0;
}