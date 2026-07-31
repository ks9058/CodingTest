#include <bits/stdc++.h>
using namespace std;
int n;
string s, pat, pre, suf;

int main(){
	cin>>n;
	cin>>pat;
	
	int pos = pat.find('*');
	pre=pat.substr(0, pos);
	suf=pat.substr(pos+1);
	
	for(int i=0; i<n; i++){
		cin>>s;
		if(pre == s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size())) cout << "DA\n";
        	else cout <<"NE\n";  
	}	
	return 0;
}