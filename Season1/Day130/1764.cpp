#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<string> v;
unordered_set<string> s;
int main(){
	cin>>n>>m;
	
	for(int i=0; i<n; i++){
		string name;
		cin>>name;
		s.insert(name);
	}
	for(int i=0; i<m; i++){
		string name;
		cin>>name;
		if(s.find(name)!=s.end()) v.push_back(name);
	}
	
	sort(v.begin(), v.end());
	cout<<v.size()<<'\n';
	for(string a:v) cout<<a<<'\n';
	return 0;
}