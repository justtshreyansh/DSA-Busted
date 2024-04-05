#include<bits/stdc++.h>
using namespace std;
char toLowercase(char ch){
     if(ch>='A' && ch<='Z'){
        return ch-'A'+'a';
    }
    return ch;
}
bool palindrome(string s){
    string ans = "";
    for(int i=0;i<s.size();i++){
        char ch = s[i];
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
                ans+=ch;
        }
    }
   
    int low = 0;
    int high = ans.size()-1;
    while(low<=high){
        
        if(toLowercase(ans[low++])!=toLowercase(ans[high--])) return false;
    }
    return true;
}
int main(){
   string s = "N2 i&nJA?a& jnI2n";
   cout<<palindrome(s);
    return 0;
}