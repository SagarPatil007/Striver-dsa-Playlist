#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,2,4,4,4,5,5,3,2};
    map<int,int> mp;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int low;
    int high;

    for(auto x : arr){
        mp[x]++;
    }

    for(auto x  : mp){
        if(x.second >= maxi){
            maxi = x.second;
            high = x.first;
        }
        if(x.second <= mini){
            mini  = x.second;
            low = x.first;
        }
    }

    cout <<"Low : "<<low<<endl;
    cout <<"High : "<<high<<endl;

}