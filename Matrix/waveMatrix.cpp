#include<bits/stdc++.h>
using namespace std;
// 1   2   3   4
// 5   6   7   8
// 9  10  11   12
vector<int> wavePrint(vector<vector<int>> matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> ans;
    bool turn  = true;
    for(int i=0;i<m;i++){
        if(turn==true){
            for(int j=0;j<n;j++){
                ans.push_back(matrix[j][i]);
            }
            turn = false;
        }
        else{
            for(int j=n-1;j>=0;j--){
                ans.push_back(matrix[j][i]);
            }
            turn = true;
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return ans;
}
int main(){
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<int> ans = wavePrint(matrix);
    return 0;
}