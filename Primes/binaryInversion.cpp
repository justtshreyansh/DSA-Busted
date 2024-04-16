#include<bits/stdc++.h>
using namespace std;
#define int long long
int binaryInversion(vector<int> arr){
    int cnt =0;
    int maxi =0;
    int ans =0;
    int n = arr.size();
    for(int i=n-1;i>=0;i--){
        if(arr[i]==0){
            cnt++;
        }
        else{
            ans+=cnt;
            maxi= max(maxi,ans);
        }
    }
    maxi = max(maxi,ans);
    return maxi;
}
signed main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int a = binaryInversion(arr);
    vector<int> secondArray = arr;
    //last one ko zero kar do
    for(int i=n-1;i>=0;i--){
        if(secondArray[i]==1){
            secondArray[i]=0;
            break;
        }
    }
    int b = binaryInversion(secondArray);
    vector<int> thirdArray = arr;
    //first zero ko one kar denge
    for(int i=0;i<n;i++){
        if(thirdArray[i]==0){
            thirdArray[i]=1;
            break;
        }
    }
    int c = binaryInversion(thirdArray);
    
    cout<<max(max(a,b),c)<<endl;
    }
    

    
}