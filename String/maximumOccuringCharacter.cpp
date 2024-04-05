#include<bits/stdc++.h>
using namespace std;
char getMaxOccuringChar(string str)
    {
        // Your code here
        map<char,int> mpp;
        for(int i=0;i<str.size();i++){
            mpp[str[i]]++;
            
        }
        char ch;
        int maxi =0;
        for(auto it:mpp){
            if(it.second>maxi){
                maxi = it.second;
                ch = it.first;
            }
            else if(it.second>=maxi){
                if(ch>it.first){
                    ch = it.first;
                    maxi = it.second;
                }
                
            }
        }
        return ch;
    }
int main(){
    string str = "aeecdc";
    cout<<getMaxOccuringChar(str);
    return 0;
}