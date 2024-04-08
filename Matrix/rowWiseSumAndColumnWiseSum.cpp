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
    //Row wise sum
    for(int i=0;i<n;i++){
        int rowSum =0;
        for(int j=0;j<m;j++){
            rowSum+=arr[i][j];
        }
        cout<<"Sum of: "<<i<<" row is: "<<rowSum<<endl;
    }


    //column wise sum
    for(int i=0;i<m;i++){
        int columnSum =0;
        for(int j=0;j<n;j++){
            columnSum+=arr[j][i];
        }
        cout<<"Sum of: "<<i<<" column is: "<<columnSum<<endl;
    }
    return 0;
}