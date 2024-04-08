#include<bits/stdc++.h>
using namespace std;

pair<int,int> Search(vector<vector<int>> matrix,int target){
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i=0;i<n;i++){
        int low = 0;
        int high = m-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(matrix[i][mid]==target){
                return {i,mid};
            }
            if(matrix[i][mid]>target){
                high = mid-1;
            }
            else low = mid+1;
        }
    }
    return {-1,-1};
    
}
int main(){
    vector<vector<int>> matrix = {{1,2,3,6},{3,4,8,9},{7,10,11,12}};
    int target = 4;
    pair<int,int> ans  = Search(matrix,target);
    cout<<ans.first<<" "<<ans.second<<endl;
    return 0;
}