#include<bits/stdc++.h>
using namespace std;
void print1ToN(int n){
    //base case me agar 1 hua toh print karake return kardo
    if(n==1){
        cout<<1<<" ";
        return ;
    }
    //and since print(n) 1 se n tak kara raha hai toh print(n-1) 1 se n-1 tak karayega
    print1ToN(n-1);
    //aur jo n hai usko alag se kara denge
    cout<<n<<" ";

}
int main(){
    print1ToN(7);
    return 0;
}