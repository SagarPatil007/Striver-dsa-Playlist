#include<bits/stdc++.h>
using namespace std;

int countDigits(int num){
    int count = 0;
    while(num){
        count++;
        num/=10;
    }
    return count;
}
int main(){
    int num = 1221564;
    cout << countDigits(num);
}