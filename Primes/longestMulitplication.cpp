#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string x,y;
        cin>>x>>y;
        if(x<y){
            swap(x,y);
        }
        bool yes = false;
        for(int i=0;i<x.size();i++){
            if(x[i]>y[i] && yes){
                swap(x[i],y[i]);
            }    
            if(x[i]!=y[i]){
                yes = true;
            }
        
       
        }
        cout<<x<<endl;
        cout<<y<<endl;

    }
    return 0;
}