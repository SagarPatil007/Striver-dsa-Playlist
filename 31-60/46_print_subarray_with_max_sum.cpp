#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {5,4,-1,7,8};

    int ansStart = -1;
    int ansEnd = -1;
    int maxi =INT_MIN;
    int start;
    int sum = 0;

    for(int i=0;i<v.size();i++){
        if(sum == 0){
            start = i;
        }
        sum += v[i];
        if(sum > maxi){
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
        if(sum < 0){
            sum = 0;
        }
    }

    for(int i = ansStart;i<=ansEnd;i++){
        cout <<v[i] <<" ";
    }

} 