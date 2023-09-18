#include<bits/stdc++.h>
using namespace std;
bool isArmStrong(int n){
    int x = n ;

    int ans = 0;
    while(n){
        int pow = n % 10;
        ans +=  pow * pow * pow;
        n/=10;
    }

    if(ans == x){
        return true;
    }
    return false;
}
int main(){
    int num = 153;
    cout << isArmStrong(num);
}