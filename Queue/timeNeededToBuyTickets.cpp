#include<bits/stdc++.h>
using namespace std;
int BuyTickets(vector<int> tickets,int k){
    queue<pair<int,int>> q;
    for(int i=0;i<tickets.size();i++){
        q.push({tickets[i],i});
    }
    int count =0;
    
    while(true){

       //agar queue ka front 1 ho 
       if(q.front().first==1){
            //aur agar wo k th element wala ho 
            if(q.front().second==k){
                return count+1;
            }
            //aur kth element wala na ho
            else{
                count++;
                q.pop();
            }
       }
       //agar queue ka front 1 no ho
       else{
            int value = q.front().first;
            int index = q.front().second;
            q.pop();
            q.push({value-1,index});
            count++;
       }
            
        
    }
    
    return 0;

}
int main(){
    vector<int> tickets = {2,3,2};
    int k =2;
    cout<<BuyTickets(tickets,k);
    return 0;
}