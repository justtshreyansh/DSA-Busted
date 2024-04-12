#include<bits/stdc++.h>
using namespace std;
// 2 0 1 5
void insert(stack<int> &st,int temp){
    if(st.size()==0 || st.top()<=temp){
        st.push(temp);
        return ;
    }
    int val = st.top();
    st.pop();
    insert(st,temp);
    st.push(val);
}
void sort(stack<int> &st){
    //base case hona chahiye ki agar stack ka size 1 ho toh already sorted hai
    if(st.size()==1) return ;
    //yaha ek size kam karke daal denge
    int temp = st.top();
    st.pop();
    sort(st);
    //yaha insert kara diya
    insert(st,temp);
}
int main(){
    vector<int> arr = {5,1,0,2};
    stack<int> st;
    for(int i=0;i<arr.size();i++){
        st.push(arr[i]);
    }
    sort(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}