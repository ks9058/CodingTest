#include <bits/stdc++.h>
using namespace std;

int T, a, b, n, m, cnt, visited[1004];
vector<int> adj[1004];

void dfs(int here){
	visited[here]=1;
	
	for(int there: adj[here]){
		if(visited[there]) continue;
		dfs(there);
	}
}


int main(){
	cin>>T;
	
	while(T--){
		cin>>n>>m;
		for(int i=0; i<1004; i++) adj[i].clear();
		fill(&visited[0], &visited[0] +1004, 0);
		cnt=0;
		for(int i=0; i<m; i++){
			cin>>a>>b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		
		for(int i=1; i<=n; i++){
			if(visited[i]) continue;
			dfs(i);
			cnt++;
		}
		if(n-1==m && cnt==1) cout<<"tree"<<'\n';
		else cout<<"graph"<<'\n';
	}	
}