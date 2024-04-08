#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    // 3 9 6 5 7 1 11 4 8
    // 3 2 3
    while(t--){
        int n,c,d;
        cin>>n>>c>>d;
        n = n*n;
        int arr[n];
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mini = min(mini,arr[i]);
        }
        int rowWise =mini;
        vector<int> ans;
        for(int i=0;i<sqrt(n);i++){
            int check =rowWise;
            for(int j=0;j<sqrt(n);j++){
               
                if(j==0){
                    ans.push_back(rowWise);
                }
                else{
                    check+=d;
                    ans.push_back(check);
                }

            }
            rowWise+=c;
            
            
        }
        sort(arr,arr+n);
        sort(ans.begin(),ans.end());
        bool flag = true;
        for(int i=0;i<n;i++){
            if(arr[i]!=ans[i]){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

       

       
    }
    return 0;
}