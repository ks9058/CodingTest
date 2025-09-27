#include <bits/stdc++.h>
using namespace std;
int n, cnt;
map<string, int> mp;
int main(){
	cin>>n;
	
	for(int i=0; i<n; i++){
		string str;
		cin>>str;
		
		if(str=="ENTER"){
			mp.clear();
		}else{
			mp[str]++;
			if(mp[str]==1) cnt++;
		}
	}
	
	cout<<cnt;
	return 0;
}