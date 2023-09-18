#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,7,8,2,4,63,4};

    int max = INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << max;
}