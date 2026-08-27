#include <bits/stdc++.h>
using namespace std;

int ret=INT_MAX,n, m;
int a[54][54];

vector<pair<int, int>> home, kfc;

int dfs(vector<int> &v){
	int cnt=0;

	
	for(int j=0; j<home.size(); j++){
			int l=INT_MAX;
			int mn=INT_MAX;
		for(int i : v){
			l=abs((kfc[i].first - home[j].first))+ abs((kfc[i].second - home[j].second));				
			mn=min(mn, l);
		}
		cnt+=mn;
	}
	
	return cnt;
	
}


void combi(int start, vector<int> &v){
	
	if(v.size() == m){
		int temp = dfs(v);
		ret=min(ret,temp);
		return;
	}
	for(int i= start+1; i<kfc.size(); i++){
		
		v.push_back(i);
		combi(i, v);
		v.pop_back();
	}	
}


int main(){
	cin>>n>>m;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
			if(a[i][j]==1) home.push_back({i, j});
			if(a[i][j]==2) kfc.push_back({i, j});
		}
	}
	vector<int> v;
	combi(-1 , v);
	
	cout<<ret;
	return 0;
}