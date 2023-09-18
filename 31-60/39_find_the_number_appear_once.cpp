#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {2, 3, 5, 4, 5, 3, 4};

    int ans = 0;
    for(int i=0;i<v.size();i++){
        ans = ans ^ v[i];
    }

    cout <<ans;
}