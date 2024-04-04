#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> stalls,int  n,int k,int mid){
    int cowCount = 1;
    int lastPosition = stalls[0];
    for(int i=1;i<n;i++){
        if(stalls[i]-lastPosition>=mid){
            cowCount++;
            if(cowCount==k) return true;
            lastPosition = stalls[i];
        }
    }
    return false;
}
int aggresiveCows(vector<int> stalls,int k){
    int low = 0;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int n = stalls.size();
    sort(stalls.begin(),stalls.end());
    for(int i=0;i<stalls.size();i++){
        maxi = max(maxi,stalls[i]);
        mini = min(mini,stalls[i]);
    }
    int high = maxi-mini;
    int ans = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(isPossible(stalls,stalls.size(),k,mid)){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}
int main(){
    return 0;
}