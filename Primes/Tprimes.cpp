#include<bits/stdc++.h>
using namespace std;
#define size 1000001

void solve(){
    
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool prime[size];
        prime[0] = true;
        prime[1] = true;
        for(int i=2;i*i<size;i++){
            if(!prime[i]){
                for(int j=i*i;j<=size;j+=i){
                    prime[j] = true;
                }
            }
            
        }
        for(int i=0;i<n;i++){
            cout<<prime[i]<<" ";
        }
        for(int i=0;i<n;i++){
            int squareRoot = (long long) sqrt(arr[i]);
            if(squareRoot*squareRoot==arr[i]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
}
int main(){
    
    solve();
    return 0;
}
    

