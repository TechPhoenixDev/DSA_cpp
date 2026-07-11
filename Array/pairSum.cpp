#include<iostream>
#include<vector>
using namespace std;
int main(){                                                                                     
    vector<int>vec={2,7,11,15};
    int target = 13;
    for(int i=0;i<vec.size();i++){
        for(int j=i+1;j<vec.size();j++){
            if(vec[i]+vec[j]==target){
                cout<<i<<","<<j<<endl;
                break;
            }
        }
    }
    return 0;
}