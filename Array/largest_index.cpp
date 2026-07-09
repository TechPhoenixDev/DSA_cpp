//print the largest index print
#include<iostream>
using namespace std;
int main (){
   int arr[5]={29,34,53,63,23};
   int idx ;
   int large = INT_MIN;
   for(int i=0;i<5;i++){
      if (arr[i]>large) idx= i;
   }
   cout<< idx;
    return 0;
}