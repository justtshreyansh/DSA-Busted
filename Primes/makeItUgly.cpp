#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        if(mpp.size()==1){
            cout<<-1<<endl;
            continue;
        }
        int count =0;
        int ans = n;
        for(int i=0;i<n;i++){
            if(arr[i]==arr[0]){
                count++;
            }
            else{
                ans = min(ans,count);
                count =0;
            }
        }
        ans=  min(ans,count);
        cout<<ans<<endl;
    }
    return 0;
}