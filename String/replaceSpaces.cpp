#include <bits/stdc++.h> 
using namespace std;
string replaceSpaces(string &str){
	// Write your code here.
	string ans = "";
	for(int i=0;i<str.size();i++){
		if(str[i]==' '){
			ans+="@40";
		}
		else ans+=str[i];
	}
	return ans;
}