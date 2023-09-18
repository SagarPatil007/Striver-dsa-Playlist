#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {2,2,1,1,1,2,2};
    int maj = v.size()/2;

    map<int,int> mp;

    for(auto x: v) mp[x]++;

    for(auto x : mp){
        if(x.second >= maj){
            cout << x.first <<" ";
        }
    }

}