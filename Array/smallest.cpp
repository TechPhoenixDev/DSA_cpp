#include<iostream>
using namespace std;
int main (){
   int arr[5]={29,34,53,63,23};
   int small = INT_MAX;  //infinite value
   for(int i=1;i<5;i++){
      small = min(arr[i],small);
   }
   cout<< small;
    return 0;
}