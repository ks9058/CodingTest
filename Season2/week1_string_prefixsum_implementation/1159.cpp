#include <bits/stdc++.h>
using namespace std; 
int n;

int cnt[26]={0,};
int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		string str;
		cin>>str;
		cnt[str[0]-97]++;
	}
	string ret="";
	for(int i=0; i<26; i++){
		if(cnt[i]>=5) ret+=(char)i+97;
	}
	if(ret.size()==0) cout<<"PREDAJA";
	else cout<<ret;
	
	return 0;
}