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
        //pahle toh ham first element nikalenge ki odd hai ki even hai
        if(is_sorted(arr,arr+n)){
            cout<<0<<endl;
            continue;
        }
        bool odd = false;
        if(arr[0]%2==1) odd = true;
        cout<<n<<endl;
        if(odd){
            //yhaa hamhe last odd nikalna hai 
            int lastOdd = n-1;
            for(int i=n-1;i>=0;i--){
                if(arr[i]%2==1){
                    lastOdd = i;
                   
                    break;
                }
            }
            
            //yaha se jinka bhi sum even hoga unko lastElement wale se replace kara denge
            for(int i=0;i<n;i++){
                if((arr[i]+arr[lastOdd])%2==0){
                    if(i==lastOdd) continue;
                    arr[i] = arr[lastOdd];
                    cout<<min(i+1,lastOdd+1)<<" "<<max(i+1,lastOdd+1)<<endl;
                }
            }
            
            //ab saare even ko bhi first element ke equal kar denge
            for(int i=0;i<n;i++){
                if((arr[i]+arr[lastOdd])%2==1){
                    if(i==lastOdd) continue;
                    arr[i] = arr[lastOdd];
                    cout<<min(i+1,lastOdd+1)<<" "<<max(i+1,lastOdd+1)<<endl;
                }
            }
            
        }
        else{
            int lastEven = n-1;
            for(int i=n-1;i>=0;i--){
                if(arr[i]%2==0){
                    lastEven = i;
                    break;
                }
            }
            for(int i=0;i<n;i++){
                if((arr[i]+arr[lastEven])%2==0){
                     if(i==lastEven) continue;
                    arr[i] = arr[lastEven];
                    cout<<min(i+1,lastEven+1)<<" "<<max(i+1,lastEven+1)<<endl;
                }
            }
            for(int i=1;i<n;i++){
                if((arr[0]+arr[i])%2==1){
                    arr[i] = arr[0];
                    cout<<0<<" "<<i+1<<endl;
                }
            }
           

        }
    }
    return 0;
}