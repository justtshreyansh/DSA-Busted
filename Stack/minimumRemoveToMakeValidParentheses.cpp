#include<bits/stdc++.h>
using namespace std;
void minimumRemove(string s){
    stack<char> st;
    vector<int> index;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            st.push(s[i]);
            index.push_back(i); 
        }
        else if(s[i]==')'){
            if(st.empty() || st.top()!='('){
                st.push(s[i]);
                index.push_back(i);
            }
            else{
                index.pop_back();
                st.pop();
            }
        }
    }

    string ans="";
    for(int i=0;i<s.size();i++){
        bool flag = true;
        for(int j=0;j<index.size();j++){
            if(i==index[j]){
                flag = false;
                break;
            }
            
        }
        if(flag) ans.push_back(s[i]);
    }
    cout<<ans<<endl;
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // for(int i=0;i<index.size();i++){
    //     cout<<index[i]<<" ";
    // }

    
    
}
int main(){
    minimumRemove("a)b(c)d");
    return 0;
}