#include <bits/stdc++.h>
using namespace std;

int m, ret;

int main(){
	cin>>m;
	
	
	for(int i=0; i<m; i++){
		string str="";
		int n=0;
		
		cin>>str;
		if(str=="all"){
			ret=(1<<21);
			ret=~ret;
			continue;
		}else if(str=="empty"){
			ret=0;
			continue;
		}
		
		cin>>n;
		if(str=="add"){
			ret|=(1<<n);
		}else if(str=="check"){
			if(ret & (1<<n)) cout<<1<<'\n';
			else cout<<0<<'\n';		
		}else if(str=="toggle"){
			if(ret & (1<<n)) ret ^= (1<<n);
			else ret|=(1<<n);
		}else if(str=="remove"){
			if(ret & (1<<n)) ret ^= (1<<n);
		}
	}	
	return 0;
}