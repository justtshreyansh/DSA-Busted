#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<map<int,int> > mpp;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                if((i+j+k)%10==3){
                    map<int,int> temp;
                    temp[i]++;
                    temp[j]++;
                    temp[k]++;
                    mpp.push_back(temp);
                    temp.clear();
                }
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
            int n;
    cin>>n;
    int arr[n];
    map<int,int> array;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        array[arr[i]%10]++;
    }
   
    bool flag = false;
    for(auto it:mpp){
        flag = 0;
        for(auto jt:it){
           if(array[jt.first]<jt.second){
            flag =1;
           }
            
        }
        if(flag==0) {
            cout<<"YES"<<endl;
            break;
        }
        
    }
    if(flag==1){
        cout<<"NO"<<endl;
    }
    }

    return 0;
}