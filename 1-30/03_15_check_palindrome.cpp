#include<bits/stdc++.h>
using namespace std;
bool digitPalindrome(int num){
    int ans = 0;
    int x = num;
    while(num){
        ans = (ans*10) + num %10;
        num/=10;
    }

    if(x == ans){
        return true;
    }
    return false;
}

bool stringPalindrome(string s){

    for(int i=0,j=s.size()-1;i<j;i++,j--){
        if(s[i]!=s[j]){
            return false;
        }
    }
    return true;
}
int main(){
    int num = 121;
    string s = "ABAA";

    cout <<digitPalindrome(num)<<endl;
    cout <<stringPalindrome(s)<<endl;
    
}