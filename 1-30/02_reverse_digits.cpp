#include<bits/stdc++.h>
using namespace std;

int reverse(int num){
    int ans = 0;
    while(num){
        ans = (ans * 10) + num % 10;
        num/=10;
    }
    return ans;
}
int main(){
    int num = 1221564;
    cout << reverse(num);
}