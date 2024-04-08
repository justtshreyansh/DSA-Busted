#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        //2 5 9
        long long ans =0;
        if(2*a>=b){
            //yani b se kharidna sahi rahega
            if(n%2==0){
                ans = n/2 * b;
            }
            else{
                ans = n/2 * b + a;
            }

        }
        else{
            ans = n*a;
        }
        cout<<ans<<endl;
        
    }

    return 0;
}