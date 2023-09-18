#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,7,8,2,4,63,4};
     int first = 0, second = -1;
     
    for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > arr[first]) {
                second = first;
                first = i;
            }
            else if (arr[i] < arr[first]) {
                if (second == -1 || arr[second] < arr[i])
                    second = i;
            }
        }

    cout << arr[second];
}