#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {4,1,4,7,1,3,5,1,1,1};

    int one = 0;

    for(int i=0;i<v.size();i++){
        if(v[i] == 1 && v[i+1] == 1){
            one++;
        }
    }
    cout <<one+1;
}