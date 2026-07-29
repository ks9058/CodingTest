#include <bits/stdc++.h>
using namespace std;

int n,m;
map<int ,int>mp;
int main(){
	cin.tie(NULL);
	cin>>n;
	
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		mp[a]++;	
	}	
	cin>>m;
	for(int i=0; i<m; i++){
		int a;
		cin>>a;
		if(mp[a]>0) cout<<"1\n";
		else cout<<"0\n";
	}
	
	return 0;
}