#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        int count =0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            while(arr[i]%2==0){
                count++;
                arr[i]/=2;
            }
        }
        bool flag = false;
        if(count>=n){
            cout<<0<<endl;
            continue;
        }
        vector<int> index;
        for(int i=2;i<=n;i+=2){
            int cnt =0;
            int temp =i;
            while(temp%2==0){
                cnt++;
                temp/=2;
            }
            index.push_back(cnt);
            
        }
        
        sort(index.begin(),index.end());
        reverse(index.begin(),index.end());
        for(int i=0;i<index.size();i++){
            count+=index[i];
            if(count>=n){
                flag = true;
                cout<<i+1<<endl;
                break;
            }
        }
        if(!flag) cout<<-1<<endl;
        

    }
    return 0;
}