#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1,2,3,4,5};
    int k = 1;

    
    // Simple Approach

    int j = 0;
    int x = v[0];
    for(int i=k;i<v.size();i++){
        v[j++] = v[i];
    }
    v[j] = x;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    


    //  STL Approach
    // reverse(v.begin(),v.begin()+k);
    // reverse(v.begin()+k,v.end());
    // reverse(v.begin(),v.end());

    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
}