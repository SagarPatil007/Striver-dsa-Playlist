#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,2,4,4,5,3,2};
    map<int,int> mp;

    for(auto x : arr){
        mp[x]++;
    }

    for(auto x  : mp){
        cout <<x.first<<" "<<x.second<<endl;
    }
}