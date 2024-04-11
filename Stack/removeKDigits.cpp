#include<bits/stdc++.h>
using namespace std;
string removeKDigits(string s,int k){
    stack<char> st;;
    string ans = "";
    //here we are inserting element whose previous element is smaller
    for(int i=0;i<s.size();i++){
        while( !st.empty() && k>0 && st.top()>s[i]){
            st.pop();
            k--;
        }
        
        st.push(s[i]);
    }
    //we are removing the extra k digits
    while(k>0 && !st.empty()){
        st.pop();
        k--;
    }
    //now we will reverse the stack for our answer
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    string finalAns = "";
    bool flag = false;
    //here we are removing leading zeroes
    for(int i=0;i<ans.size();i++){
        if(ans[i]=='0' && !flag){
            continue;
        }
        else{
            flag = true;
            finalAns+=ans[i];
        }
    }
    //this is just for checking if our final answer will become of zero size for eg 10 and k=1 then our answer should be 0
    if(finalAns.size()==0){
       
        return "0";
    }
    return finalAns;
}
int main(){
    string str = "1432219";
    string ans = removeKDigits(str,3);
    

    return 0;
}