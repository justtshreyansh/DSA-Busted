#include<bits/stdc++.h>
using namespace std;
int sandwich(vector<int> students,vector<int> sandwithches){
    stack<int> st;
    for(int i=sandwithches.size()-1;i>=0;i--){
        st.push(sandwithches[i]);
    }
    queue<int> q;
    for(int i=0;i<students.size();i++){
        q.push(students[i]);
    }
    int count =0;
    while(true){
        //agar q ka front and stack ka top equal ho toh dono pop karenge
        if(q.front()==st.top()){
            q.pop();
            st.pop();
            count =0;
        }
        //agar na ho toh
        else{
            int value = q.front();
            q.pop();
            q.push(value);
            count++;
            if(count==st.size()) return st.size();
        }
        if(st.size()==0) return 0;
        
    }
    return 0;
}
int main(){
    vector<int> students = {1,1,0,0};
    vector<int> sandwithches = {0,1,0,1};
    cout<<sandwich(students,sandwithches);
    return 0;
}