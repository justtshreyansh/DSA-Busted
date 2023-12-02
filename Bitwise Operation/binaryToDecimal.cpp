#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n){
    int i=0;
    int ans =0;
    while(n!=0){
        int bit = (n%10);
        if(bit==1){
            ans = ans + pow(2,i);

        }
        n = n/10;
        i++;
    }
    return ans;
}
int main(){ 
   cout<<binaryToDecimal(11);
return 0;
}