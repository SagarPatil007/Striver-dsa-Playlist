#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<vector<int>> mat = {{0,1},{1,0}};

    vector<int> res{-1, -1};
    for(int i = 0; i < mat.size(); ++i){
        int one = count(mat[i].begin(), mat[i].end(), 1);
        if(one > res[1])
            res = {i, one};
    }
    
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }

}