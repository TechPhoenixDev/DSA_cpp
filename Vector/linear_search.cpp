#include<iostream>
#include<vector>
using namespace std;
void LinearSearch(const vector<char>& ch,char target){
    for(int i=0;i<ch.size();i++){
        if (ch[i] == target){
            cout << target <<" is found at index "<<i<<" ";
            return;
        }
    }

    cout<<"target is not present here ";
    return;
}
int main(){
    vector<char>ch = {'a','b','v','e','t'};
    char target = 'r';
    LinearSearch(ch,target);
    return 0; 
}