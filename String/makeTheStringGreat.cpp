#include<bits/stdc++.h>
using namespace std;
string stringGreat(string s){
    string ans;
    ans.push_back(s[0]);
    for(int i=1;i<s.size();i++){
        char ch = s[i];
        if(ans.size()>0){
            int diff = abs(ch-ans.back());
            if(diff==32){
                ans.pop_back();
            }
            else{
                ans.push_back(ch);
            }
        }
        else{
            ans.push_back(ch);
        }
    }
    return ans;
}
int main(){
    string ans = "s";
    string finalAns = stringGreat(ans);
    cout<<finalAns<<endl;
    return 0;
}