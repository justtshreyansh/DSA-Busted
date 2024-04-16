#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<string,int> mpp;
        vector<string> str;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            str.push_back(s);
            mpp[s]++;
        }
        
        for(int i=0;i<str.size();i++){
            if(str[i].size()==1){
                cout<<0;
                continue;
            }
            bool flag = false;
            for(int j=0;j<str[i].size()-1;j++){
                string left = str[i].substr(0,j+1);
                string right = str[i].substr(j+1,str[i].size()-j);
                
                if(mpp.count(left) && mpp.count(right)){
                    cout<<1;
                    flag  = true;
                    break;
                }
            }
            if(!flag) cout<<0;
        }
        cout<<endl;
    }
    

  
    return 0;
}