#include<iostream>
using namespace std;
void reverseVector(vector<char> & vec){
    int start =0,end= vec.size() - 1;
    while(start<end){
        char temp = vec[start];
        vec[start]=vec[end];
       vec [end]=temp;
       start ++,end --;
    }
    for(char value: vec){
        cout << value <<" ";
    }
    
}
int main (){
    vector<char>vec={'a','b','c','q','r','t'};
    reverseVector(vec);
    return 0;
}