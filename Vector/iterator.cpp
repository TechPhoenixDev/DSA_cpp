#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int >v2={2,3,5};
    // for(int i : v2){
    //     cout << i << endl;
    // }

    vector<char>vec ={'a','b','c','d'};
    for(char iterator :vec){
        cout<<iterator<<endl;
    }
    return 0;
}