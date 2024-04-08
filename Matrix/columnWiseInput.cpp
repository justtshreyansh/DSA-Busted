#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    //3 4
    //1 2 3 4
    //5 6 7 8
    // 9 10 11 12
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[j][i];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}