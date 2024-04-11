#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        n = n-1;
        long long ans = 0;
        
        //1 2 4 6 8 10
        ans+=1;
        n = n-1;
        ans+= (n*(2*2+(n-1)*2))/2;

        cout<<ans<<endl;

    }
    return 0;
}