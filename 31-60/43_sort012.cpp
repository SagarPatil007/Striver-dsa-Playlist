#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1,0,2,1,2};

    int low = 0;
    int mid = 0;
    int high = v.size()-1;

    while(mid <= high){

        switch(v[mid]){
            case 0 :
                swap(v[low++],v[mid++]);
                break;
            case 1 :
                mid++;
                break;
            case 2 :
                swap(v[mid],v[high--]);
                break; 
        }

        // for understading dry run code  
        for(int i=0;i<v.size();i++){
            cout<<v[i] <<" ";
        }
        cout <<"Low : "<<low<<" mid : "<<mid<<" high : "<<high;
        cout <<endl<<endl;
    }

}