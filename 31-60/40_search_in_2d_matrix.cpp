#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v {{1,2,3},{4,5,6},{7,8,9}};
    int x = 60;
    bool ch = true;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j] == x){
                ch = false;
                cout << "Element is found";
            }
        }
    }

    if(ch)
        cout <<"Element is not found";
}