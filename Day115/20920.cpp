#include <bits/stdc++.h>
using namespace std;

int n,m;
unordered_map<string ,int> mp; 
vector<string> v;

bool cmp(const string& a, const string& b) {
	if (mp[a] != mp[b]) return mp[a] > mp[b]; //큰 수가 앞에 오도록 비교문  
	if (a.size() != b.size()) return a.size() > b.size();
	return a < b;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m;
	
	for(int i=0; i<n; i++){
		string str;
		cin>>str;
		if(str.size()>=m){
			if(mp[str]==0) v.push_back(str);
			mp[str]++;
		}	
	}	
	sort(v.begin(), v.end(), cmp);
	
	for(auto it : v){
		cout<<it<<'\n';
	}
	return 0;
}