#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> &arr){
    int j =0;
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j++] = arr[i];
        }
    }
    for(int i=j;i<n;i++){
        arr[j++] = 0;
    }
}
int main(){
    vector<int> arr = {0,1,0,0,3,12};
    moveZeroes(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}