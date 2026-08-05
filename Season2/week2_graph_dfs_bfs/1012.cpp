#include <bits/stdc++.h>
using namespace std;
int T, n, m, k, ret;

bool a[54][54];
bool visited[54][54];

int dy[]={-1,0,1,0};
int dx[]={0,1,0,-1};

void dfs(int y, int x){
	visited[y][x]=1;
	
	for(int i=0; i<4; i++){
		int ny=y+dy[i];
		int nx=x+dx[i];
		
		if(ny<0 || nx<0 ||ny>=n || nx>m) continue;
		if(visited[ny][nx]) continue;
		if(a[ny][nx]==0) continue;
		
		dfs(ny, nx);	
	}
}


int main(){
	cin>>T;
	while(T--){
		ret=0;
		fill(&a[0][0], &a[53][54], 0);
		fill(&visited[0][0], &visited[53][54],0);
		
		cin>>n>>m>>k;
		
		for(int i=0; i<k; i++){
			int y,x;
			cin>>y>>x;
			a[y][x]=1;
		}
		
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(!visited[i][j]&&a[i][j]){
					dfs(i,j);
					ret++;							
				}
			}
		}
		
		cout<<ret<<'\n';		
	}
	return 0;
}