#include<bits/stdc++.h>
using namespace std;
void printNto1(int n){
    if(n==1){
        cout<<1<<" ";
        return ;
    }
    //chuki print(n) n se 1 tak kara raha hai toh print(n-1) n-1 se 1 tak karayega
    //toh ham n ko khud kara lenge aur baaki print pe chhod denge
    cout<<n<<" ";
    printNto1(n-1);
}
int main(){
    printNto1(7);
    return 0;
}