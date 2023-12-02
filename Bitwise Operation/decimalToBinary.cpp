#include<bits/stdc++.h>
using namespace std;
int decimalToBinary(int n){
    int answer = 0;
    int i=0;
    while(n!=0){
        int digit = (n&1); //We find the bit
        answer = digit * (pow(10,i)) + answer; //update the answer
        n = n>>1; //right shift
        i++;
    }
    return answer;
}
int main(){ 
   cout<<decimalToBinary(15);
return 0;
}