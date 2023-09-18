#include<bits/stdc++.h>
using namespace std;
void moveZero(vector<int> &nums){
    int j = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] != 0){
            swap(nums[i],nums[j]);
            j++;
        }
    }

    for(int i=0;i<nums.size();i++){
        cout<<nums[i];
    }
}
int main(){
    vector<int> v = {1,2,0,4,0,5};
    moveZero(v);

}