#include<bits/stdc++.h>
using namespace std;
int searchInMatrix(vector<vector<int>> matrix,int target){
    int n=  matrix.size();
    int m = matrix[0].size();
    //1 2 3 4
    //5 6 7 8
    //9 10 11 12
    int low = 0;
    int high = n*m-1;
    
    while(low<=high){
        int mid = low + (high-low)/2;
        int element = matrix[mid/m][mid%m];

        if(element==target) return 1;
        if(element>target){
            high=  mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return 0;
}
int main(){
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    cout<<searchInMatrix(matrix,0);
    return 0;
}