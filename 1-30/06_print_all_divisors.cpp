#include<bits/stdc++.h>
using namespace std;
void printAllDivisors(int num){
    for(int i=1;i<=num;i++){
        if(num % i == 0){
            cout << i <<endl;
        }
    }
}
int main(){
    int num = 20;
    printAllDivisors(num);
}