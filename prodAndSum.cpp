#include<bits/stdc++.h>
using namespace std;
int productAndSum(int n){
    int product = 1;
        int sum = 0;
        int num  = n;
        while(num!=0){
            int digit = num%10;
            product = product*digit;
            sum = sum+digit;
            num = num/10;
        }
        return product-sum;
}
int main(){ 
   int n =4421;
   cout<<productAndSum(n);
return 0;
}