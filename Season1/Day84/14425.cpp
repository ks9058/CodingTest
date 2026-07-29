#include <bits/stdc++.h>
using namespace std;

int n,m;
int cnt;
map<string, char> mp;

int main(){
	cin>>n>>m;
	
	for(int i=0; i<n; i++){
		string str;
		cin>>str;
		mp[str]='o';
	}
	for(int i=0; i<m; i++){
		string str;
		cin>>str;
		if(mp[str]=='o') cnt++;
	}
	cout<<cnt;
	return 0;
}