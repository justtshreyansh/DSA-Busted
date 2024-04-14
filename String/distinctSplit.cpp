#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,int> mpp;
        vector<int> prefix(n,0);
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
            prefix[i] = mpp.size();
        }
        unordered_map<char,int> mpp2;
        vector<int> suffix(n,0);
        for(int i=n-1;i>=0;i--){
            mpp2[s[i]]++;
            suffix[i] = mpp2.size();
        }

       
       int ans =0;
       int maxi = 0;
       for(int i=0;i<n-1;i++){
            ans = prefix[i]+ suffix[i+1];
            maxi = max(ans,maxi);
       }
       cout<<maxi<<endl;
      
    }
    return 0;
}