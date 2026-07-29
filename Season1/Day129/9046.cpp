#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	cin.ignore();
	for(int i=0; i<n; i++){
		int alpha[26];
		int mx=0;
		char ret='0';
		int check=0;
		fill(&alpha[0], &alpha[26], 0);
		string str="";
		getline(cin, str);
		
		for(int j=0; j<str.size(); j++){
			if(str[j]==' ') continue;
			alpha[str[j]-'a']++;
			mx=max(mx, alpha[str[j]-'a']);
		}

		for(int j=0; j<26; j++){
			if(mx==alpha[j]){
				ret=j+'a';
				check++;
			}
		}
		if(check<2) cout<<ret<<'\n';
		else cout<<"?\n";
	}
	return 0;
}