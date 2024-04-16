#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int d[n];
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        vector<int> arr(n);
        arr[0] = d[0];
        for(int i=1;i<n;i++){
            arr[i] = arr[i-1]+d[i];
        }
        //1 0 2 5
        //1 1 3 8
        //1 1 3 8
        vector<int> brr(n);
        brr[0] = d[0];
        for(int i=1;i<n;i++){
            if(brr[i-1]-d[i]>=0){
                brr[i] = brr[i-1]-d[i];
            }
            else{
                brr[i] = brr[i-1]+d[i];
            }
        }
        bool flag = true;
        for(int i=0;i<n;i++){
            if(arr[i]!=brr[i]){
                flag = false;
                break;
            }
        }
        if(flag){
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;

        }
        else{
            cout<<-1<<endl;
        }
       
    }
    return 0;
}