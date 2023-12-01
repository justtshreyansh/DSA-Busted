#include<bits/stdc++.h>
using namespace std;
int main(){ 
   int a = 3;
   int b = 6;
   cout<<"a&b "<<(a&b)<<endl;
   cout<<"a|b "<<(a|b)<<endl;
   cout<<~a<<endl;
   cout<<"a^b "<<(a^b)<<endl;

   cout<<"Left Shift operations:"<<endl;
   cout<<(19<<2)<<endl;
   cout<<(21<<1)<<endl;
   
   cout<<"Right shift operations:"<<endl;
   cout<<(19>>2)<<endl;
   cout<<(21>>1)<<endl;

return 0;
}