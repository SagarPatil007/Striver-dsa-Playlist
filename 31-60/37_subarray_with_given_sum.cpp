#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1, 4, 20, 3, 10, 5};
    int sum = 33;
    int i,j;
    for(i=0;i<v.size();i++){
        int ans = 0;
        for(j=i;j<v.size();j++){
            ans += v[j];
        }

        if(ans  == sum){
            cout << i <<" and "<<j<<endl;
            break; 
        }
    }
}