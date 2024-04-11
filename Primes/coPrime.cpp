#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> mpp(1001,-1);
        for(long long i=1;i<=n;i++){
            long long x;
            cin>>x;
            mpp[x] = i;
        }
        // 1 3 5 2 4 7 7
        // 1 4 2 5 3 -1 7
        long long ans = -1;
        for(long long i=1;i<1001;i++){
            if(mpp[i]!=-1){
                for(long long j=1;j<1001;j++){
                    if(mpp[j]!=-1 && __gcd(i,j)==1){
                        ans = max(ans,mpp[i]+mpp[j]);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}