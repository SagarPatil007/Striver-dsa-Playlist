#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,8,4,4,2,3,1,8,8};

    sort(arr.begin(),arr.end());

    int j = 0;

    for(int i=0;i<arr.size();i++){
        if(arr[i] != arr[i+1]){
            arr[j++] = arr[i]; 
        }
    }
    arr[j++] = arr[arr.size()-1];

    for(int i=0;i<j-1;i++){
        cout<<arr[i]<<" ";
    }
}