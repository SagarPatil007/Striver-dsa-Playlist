#include<bits/stdc++.h>
using namespace std;
bool isprime(int num){

    int count = 0;
    for(int i=2;i<num;i++){
        if(num % i == 0){
            count++;
        }
    }
    if(count == 0){
        return true;
    }
    return false;
}
int main(){
    int num = 12;
    cout <<isprime(num);
}