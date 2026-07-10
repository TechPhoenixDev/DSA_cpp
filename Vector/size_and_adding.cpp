//how to know the size of a vector and adding element to a vector;
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    cout<<"size before adding element: "<<vec.size() <<endl;
    vec.push_back(34);
    vec.push_back(43);
    vec.push_back(53);
     cout<<"size after adding element: "<<vec.size() <<endl;
     for(int iterator: vec){
        cout<< iterator <<" ";
     }
     cout<<endl;

     //for deletion 

     vec.pop_back();//last element deleted;
      for(int iterator: vec){
        cout<< iterator <<" ";
     }

    return 0;
}