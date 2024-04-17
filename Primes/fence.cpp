#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n+1];
//     7 3
// 1 2 6 1 1 7 1

    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int maxi = INT_MAX;
    int sum =0;
    for(int i=1;i<=k;i++){
        sum+=arr[i];
    }
    maxi = min(maxi,sum);
    int index =1;
    //2 1
    // 10 20
    for(int i=1;i<=n-k;i++){
        sum-=arr[i];
        sum+=arr[i+k];
        if(sum<maxi){
            maxi = sum;
            index = i+1;
        }

    }
    cout<<index<<endl;
    
    

    return 0;
}