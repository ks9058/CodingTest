#include <bits/stdc++.h>
using namespace std;
int n,m;
unordered_set<string> s;
vector<string> v;

int main(){
	cin>>n>>m;
	for(int i=0; i<n; i++){
		string str;
		cin>>str;
		s.insert(str);	
	}
	for(int i=0; i<m; i++){
		string str;
		cin>>str;
		if(s.find(str)!=s.end()) v.push_back(str);	
	}
	sort(v.begin(), v.end());
	cout<<v.size()<<'\n';
	for(string str: v ){
		cout<<str<<'\n';
	}
	
	return 0;
}