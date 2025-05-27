#include <bits/stdc++.h>
using namespace std;

int n,m;
map<string, string> mp;

int main(){
    //아래 두 줄 없으면 시간초과
	cin.tie(NULL);
	cout.tie(NULL);

	cin>>n>>m;
	for(int i=1; i<=n; i++){
		string str;
		cin>>str;
		string temp=to_string(i);
		mp[str]=temp;
		mp[temp]=str;
	}
	for(int i=0; i<m; i++){
		string s;
		cin>>s;
		cout<<mp[s]<<'\n';	
	}
	
	return 0;
}