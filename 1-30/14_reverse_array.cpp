#include<bits/stdc++.h>
using namespace std;
void rev(vector<int> &v){
    for(int i=0,j=v.size()-1;i<j;i++,j--){
        swap(v[i],v[j]);
    }
}
int main(){
    vector<int> v = {1,2,3,4,5};
    
    rev(v);

    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }

    cout <<endl;
    reverse(v.begin(),v.end());
    
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}