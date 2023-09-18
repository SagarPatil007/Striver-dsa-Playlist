#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int> v){
    for(int i=0;i<v.size();i++){
        if(v[i] >= v[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    vector<int> v= {1,2,3,4,5};
    cout << isSorted(v);
}