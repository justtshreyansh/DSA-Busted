#include<bits/stdc++.h>
using namespace std;
bool permutationInString(string s1,string s2){
    map<char,int> mpp;
    for(int i=0;i<s1.size();i++){
        mpp[s1[i]]++;
    }
    for(int i=0;i<s2.size();i++){
        map<char,int> mpp2;
        int j =i;
        int size = s1.size();
        while(size--){
            mpp2[s2[j]]++;
            j++;
        }
       
        if(mpp2==mpp){
            return true;
        }
       
    }
    

    return false;
}
int main(){
    cout<<permutationInString("intention","execution");
    return 0;
}