#include<bits/stdc++.h>
using namespace std;
void reverseString(vector<char> &str){
    int low =0;
    int high = str.size()-1;
    while(low<=high){
        swap(str[low++],str[high--]);
    }
}
int main(){
    vector<char> str = {'a','b','c','d','e'};
    reverseString(str);
    for(int i=0;i<str.size();i++){
        cout<<str[i]<<" ";
    }
    return 0;
}