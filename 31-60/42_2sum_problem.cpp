#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> nums,int target){
    map<int,int> mp;

    for(int i=0; i<nums.size(); i++)
        {
            //find remaning val
            int rem = target-nums[i];

            if(mp.find(rem)!=mp.end()) return {mp[rem],i};

            mp[nums[i]]=i;
        }
        return {};
}
int main(){
    vector<int> v = {2,7,11,15};
    int target = 9;
    twoSum(v,target);
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}