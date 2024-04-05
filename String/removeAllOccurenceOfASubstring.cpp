#include<bits/stdc++.h>
using namespace std;
string removeOccurenece(string s,string part){
    string ans = "";
    int j = 0;
    for(int i=0;i<s.size();i++){
        if(ans.find(part)!=string::npos){
            for(int i=0;i<part.size();i++){
                ans.pop_back();
            }
            ans.push_back(s[i]);
        }
        else{
            ans.push_back(s[i]);
        }
       
    }
    if(ans.find(part)!=string::npos){
        for(int i=0;i<part.size();i++){
            ans.pop_back();
        }
    }
    return ans;
}
int main(){
    string s = "axxxxyyyyb";
    string part = "xy";
   
    cout<<removeOccurenece(s,part)<<endl;
    return 0;
}