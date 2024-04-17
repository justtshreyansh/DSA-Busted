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
        bool flag = true;
        //0010
        int count =0;
        for(int i=0;i<s.size()-1;i++){
            char ch = s[i];
            char ch2 = s[i+1];
            // cout<<ch<<" "<<ch2<<endl;
           if(count%2==0){
                if(ch==ch2){
                    
                    if(s[i+1]=='0') s[i+1] = '1';
                    else s[i+1] = '0';
                    count++;
                }
           }
           else{
                if(s[i+1]=='0') s[i+1]='1';
                else s[i+1] = '0';
                if(s[i]==s[i+1]){
                    count++;
                    if(s[i+1]=='1') s[i+1] = '0';
                    else s[i+1]='1';

                }
           }
        }
        cout<<count<<endl;
        
    }
    return 0;
}