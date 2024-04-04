#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& arr, int n, vector<int>& arr2, int m) {
        vector<int> ans;
        
        int i =0;
        int j=0;
        while(i<n && j<m){
        if(arr[i]>arr2[j]){
            ans.push_back(arr2[j]);
            j++;
        }
        else{
            ans.push_back(arr[i]);
            i++;
        }
    }
    while(j<m){
        ans.push_back(arr2[j]);
        j++;
    }
    while(i<n){
        ans.push_back(arr[i]);
        i++;
    }
    for(int i=0;i<n+m;i++){
        arr[i] = ans[i];
    }
    
    }
int main(){
    vector<int> arr = {1,2,3,0,0,0};
    vector<int> arr2 = {2,5,6};
    merge(arr,3,arr2,3);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}