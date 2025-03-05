#include <bits/stdc++.h>
using namespace std;

int n;
char ret;
int main(){
	cin>>n;
	cin.ignore(); // 개행 문자 제거
	
	for(int i=0; i<n; i++){
		int ok=0, mx=0;
		int cnt[200];
		fill(cnt, cnt + 200, 0);
		
		string str;
		getline(cin, str);

		for(int j=0; j<str.size(); j++){
		   if (!isalpha(str[j])) continue; // 알파벳만 세야 한다. 
			cnt[str[j]]++;
			if(mx<cnt[str[j]]) mx=cnt[str[j]];
		}
		
		for(int j=0; j<200; j++){
			if(mx<=cnt[j]){
				mx=cnt[j];
				ret=j;
				ok++;
			}
		}
		if(ok>1) cout<<"?"<<"\n";
		else cout<<ret<<"\n"; 
	}
	return 0;
}