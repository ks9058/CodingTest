#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;

int n;
int main(){
	cin>> n;
	
	for(int i=0; i<n; i++){
		string str="";
		string temp="";
		cin>>str;
		int check=0;
		for(int j=0; j<str.size(); j++){
			if(check){
				temp+=str[j];
			}
			if(str[j]=='.') check=1;
		}
		mp[temp]++;
	}
	
	for(auto a:mp){
		cout<<a.first<<" "<<a.second<<'\n';
	}
	
	return 0;
}