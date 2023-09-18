#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1, 2, 3, -4, -1, 4};
    int j = 0;
    for(int i=0;i<v.size();i++){
        if(v[i]<0){
            swap(v[i],v[j++]);
        }
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}