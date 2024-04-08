#include<bits/stdc++.h>
using namespace std;
string lexoSmallest(string s,int k){
    string ans= "";
    int count =0;
    for(int i=0;i<s.size();i++){
        if(count<k){
            char ch = s[i];
            int diff= ch-'a';
            int mini = 26-diff;
            mini = min(mini,diff);
            if(count+mini<=k){
                count+=mini;
                ans+='a';
            }
            else{
                int x = k-count;
                char ch = s[i]-x;
                ans+=ch;
                count+=x;

            }
            
        }
        else{
            ans+=s[i];
        }
    }
    
    return ans;
}
int main(){
    string ans = "lol";
    string finalAns = lexoSmallest(ans,0);
    return 0;
}