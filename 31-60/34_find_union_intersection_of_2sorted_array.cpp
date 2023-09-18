#include<bits/stdc++.h>
using namespace std;
void find_union(vector<int> v1,vector<int> v2){
    set<int> s;
    for(auto x : v1){
        s.insert(x);
    }

    for(auto x : v2){
        s.insert(x);
    }

    for(auto x : s){
        cout << x <<" ";
    }
}
void find_intersection(vector<int> v1,vector<int> v2){
    map<int,int> mp;
    for(auto x : v1){
        mp[x]++;
    }
    for(auto x : v2){
        mp[x]++;
    }

    for(auto x : mp){
        if(x.second == 2){
            cout << x.first <<" ";
        }
    }
}
int main(){
    vector<int> arr1 = {1,2,3,4,5,6};
    vector<int> arr2 = {1,2,3};
    find_union(arr1,arr2);
    cout <<endl;
    find_intersection(arr1,arr2);
}