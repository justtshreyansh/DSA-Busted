#include<bits/stdc++.h>
using namespace std;

void insert(vector<int> &arr,int temp){
    //base case jab array khali ho ya aakhri element temp se chota ho ya barabar ho
    if(arr.size()==0 || arr[arr.size()-1]<=temp){
        arr.push_back(temp);
        return ;
    }
    //yaha wo value niikal le rahe hai 
    int val = arr[arr.size()-1];
    arr.pop_back();
    //insert kara diya
    insert(arr,temp);
    //jo value pop karayi thi wo aakhri me insert kar diya
    arr.push_back(val);
    
}
void sort(vector<int> &arr){
    //base case hoga ki jab array me ek element ho toh wo already sorted hoga
    if(arr.size()==1) return ;
    //otherwise ham n-1 tak sort kar denge
    int temp = arr[arr.size()-1];
    arr.pop_back();
    sort(arr);
    //yaha jo aakhri value hai usko insert karayenge
    insert(arr,temp);
}

int main(){
    vector<int> arr = {2,5,1,0};
    sort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}