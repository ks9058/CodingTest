#include <bits/stdc++.h>
using namespace std;

int n;
char c;
map<string, int> mp;
int cnt;
int main(){
	cin>>n>>c;
	
	for(int i=0; i<n; i++){
		string str="";
		cin>>str;
		if(mp[str]!=1) cnt++;	
		mp[str]=1;
	}
	if(c=='Y') cout<<cnt;
	else if(c=='F') cout<<cnt/2;
	else if(c=='O') cout<<cnt/3;
	
	return 0;
}