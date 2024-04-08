#include<bits/stdc++.h>
using namespace std;
void sieve(int n){
    vector<bool> prime(n+1,true);
    for(int i=2;i<=n;i++){
        if(prime[i]){
            for(int j=2*i;j<=n;j+=i){
                prime[j] = false;
            }
        }
    }

    for(int i=2;i<=n;i++){
        
        cout<<i<<" "<<prime[i]<<endl;
        
        
    }
}
int main(){
    sieve(40);
    return 0;
}