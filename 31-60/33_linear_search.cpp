#include<bits/stdc++.h>
using namespace std;
int search(vector<int> v,int x){
    for(int i=0;i<v.size();i++){
        if(v[i] == x){
            return i+1;
        }
    }
    return -1;
}
int main(){
    vector<int> v = {1,2,3,4,4,7,8};
    cout<<"8 is found at "<< search(v,8);
}