#include<bits/stdc++.h>
using namespace std;
bool sortedAndRotated(vector<int> nums){
    int count =0;
    for(int i=1;i<nums.size();i++){
        if(nums[i-1]>nums[i]){
            count++;
        }
    }
    if(nums[nums.size()-1]>nums[0]){
        count++;
    }
    return count<=1;

}
int main(){
    vector<int> nums = {3,4,5,1,2};
    cout<<sortedAndRotated(nums);
    return 0;
}