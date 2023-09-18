#include<bits/stdc++.h>
using namespace std;
int find_missing(vector<int> v){
    int n = v.size()+1;
    
    int sum = 0;
    for(int i=0;i<v.size();i++){
        sum += v[i];
    }

    return (n*(n+1)/2)-sum;
 
}
int main(){
    vector<int> v = {1,2,3,5,6};
    cout <<"Missing number is : "<<find_missing(v);
}