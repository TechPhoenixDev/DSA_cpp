#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec ={2,2,1,1,1,2,2};
    int count =0;
    int candidate;
    for(int ite:vec){
        if(count == 0){
            candidate = ite;
        }
        if(candidate == ite){
            count ++;
        }
        else count --;
    }
    cout<<"the majority element: "<<candidate<<endl;

    return 0;
}