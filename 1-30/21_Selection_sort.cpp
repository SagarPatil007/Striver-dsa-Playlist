#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &v){
    int min;
    int i,j;

    for(i=0;i<v.size();i++){
        min = i;
        for(j=i+1;j<v.size();j++){
            if(v[j] < v[min]){
                min = j;
            }
        }

        if(min != i)
        swap(v[i],v[min]);
    }
}
int main(){
    vector<int> v ={5,4,7,1,2,3};
    selectionSort(v);
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}