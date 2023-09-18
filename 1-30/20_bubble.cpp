#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {4,1,5,8,9,2,3,1};

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}