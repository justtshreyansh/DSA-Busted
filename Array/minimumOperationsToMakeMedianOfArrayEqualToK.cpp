#include<bits/stdc++.h>
using namespace std;
long long miniMum(vector<int> arr,int k){
    long long count =0;
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int median = n/2;
    int m = arr[median];
    
   
    if (m<k){
        for(int i=median;i<n;i++){
            if(arr[i]<=k){
                count+=k-arr[i];
            }
        }
    }
    else if(m>k){
        for(int i=median;i>=0;i--){
            if(arr[i]>=k){
                count+=arr[i]-k;
            }
        }
    }
    return count;
    
}
int main(){
    vector<int> arr= {2,5,5,6,7};
    int k =7;
    cout<<miniMum(arr,k);

    return 0;
}