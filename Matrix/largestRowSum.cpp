#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];

        }
    }
    int largestRowSum =0;
    for(int i=0;i<n;i++){
        int rowSum =0;
        for(int j=0;j<m;j++){
            rowSum+=arr[i][j];
        }
        largestRowSum = max(largestRowSum,rowSum);
    }
    cout<<largestRowSum<<endl;
    return 0;
}