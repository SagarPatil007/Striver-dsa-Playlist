#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n > 0){
        cout << "Hello Wolrd"<<endl;
    }
    return print(n-1);
}
int main(){
    int n = 5;
    print(n);
}