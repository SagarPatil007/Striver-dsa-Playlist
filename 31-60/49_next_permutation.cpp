#include<bits/stdc++.h>
using namespace std;
void next_per(vector<int> v){
    int idx = -1;

    for(int i=v.size()-1;i>0;i--){
        if(v[i] > v[i-1]){
            idx = i;
            break;
        }
    }
    // cout <<idx <<endl; 
    if(idx == -1){
        reverse(v.begin(),v.end());
    }else{
        int prev = idx;
        for(int i=idx+1;i<v.size();i++){
            if(v[i] > v[idx-1] and v[i] <= v[prev]){
                prev = i;
            }
        }
        swap(v[idx-1],v[prev]);
        reverse(v.begin()+idx,v.end());
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}   
int main(){
    vector<int> v = {1,2,3};
    // approach 1:
    // next_per(v);

    // approch 2:
    next_permutation(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}