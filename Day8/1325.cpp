#include <bits/stdc++.h>
using namespace std;

vector<int> adj[10001];
int n,m,cnt,temp, temp2, visited[10001],dp[10001];

int dfs(int here){
	visited[here]=1;
	int ret=1;
	for(int there : adj[here]){
		if(visited[there]) continue;
		ret=ret+dfs(there);
	}
	return ret;
}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>m;
	for(int i=0; i<m; i++){
		cin>>temp>>temp2;
		adj[temp2].push_back(temp);
	}
	for(int i=1; i<=n; i++){
		fill(&visited[0], &visited[10001],0);
		dp[i]=dfs(i); //dp라는 배열에 각 노드 마다 dfs 헀던 값을 저장 
		cnt=max(dp[i],cnt); //최대값 cnt에 저장 
	}
	for(int i=1; i<=n; i++) if(cnt==dp[i]) cout<<i<<" "; //최대값과 dp배열에 저장 한 값이 같으면 출력 
	
	return 0;
}