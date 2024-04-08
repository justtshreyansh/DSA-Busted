#include<bits/stdc++.h>
using namespace std;
// 1   2    3    4
// 5   6    7    8
// 9  10   11   12 
vector<int> spiralPrint(vector<vector<int>> matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> ans;
    int left = 0;
    int right = m-1;
    int top = 0;
    int bottom = n-1;
   
    while(left<=right && top<=bottom){
        //left to right 
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);

        }
        top++;
        
        //top to bottom
        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        //right to left
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        
        //bottom to top
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        
       

    }
   return ans;
}
int main(){
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<int> ans = spiralPrint(matrix);
    return 0;
}