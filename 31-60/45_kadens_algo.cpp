#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {-2,1,-3,4,-1,2,1,-5,4};

    int start = 0;
    int end = 0;

    int ans = 0;
    int sum = 0;
    for(int i=0;i<v.size();i++){
        sum += v[i];
        ans = max(ans,sum);
        end = i;
        if(sum < 0){
            start = i;
            sum = 0;
        }
    }

    for(start;start<=end;start++){
        cout << v[start] <<" ";
    }
    // cout << ans;
}