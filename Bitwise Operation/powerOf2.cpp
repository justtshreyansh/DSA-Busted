#include<bits/stdc++.h>
using namespace std;
bool powerOfTwo(int n){
    for(int i=0;i<=30;i++){
        int ans=  pow(2,i);
        if(ans==n){
            return true;
        }
    }
    return false;
}
int main(){ 
   cout<<powerOfTwo(33);
return 0;
}