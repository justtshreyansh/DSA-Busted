#include<bits/stdc++.h>
using namespace std;
void insert(stack<int> &st,int temp){
    if(st.size()==0){
        st.push(temp);
        return ;
    }
    int val = st.top();
    st.pop();
    insert(st,temp);
    st.push(val);
}
void solve(stack<int>&st){
        if(st.size()==0){
            return ;
        }
        int temp = st.top();
        st.pop();
        solve(st);
        insert(st,temp);
}
int  main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    solve(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}