#include <bits/stdc++.h>
using namespace std;

int dy[]={-1,0, 1,0};
int dx[]={0,1,0,-1};
int visited[10][10];
int a[10][10];

vector<pair<int, int>> wall;

int n, m, mx;

void dfs(int y, int x){
	
	for(int i=0; i<4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		
		if(ny <0 || nx < 0 || ny >= n || nx >= m) continue;
		if(visited[ny][nx]==1 ) continue;
		if(a[ny][nx] == 1) continue;
		
		visited[ny][nx]=1;
		dfs(ny, nx);
	}
}


int solve(){
	int cnt=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(visited[i][j]==0 && a[i][j]==2) dfs(i,j);
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0;j<m; j++){
			if(a[i][j] == 0 && !visited[i][j])cnt++;
		}
	}
	
	return cnt;
}


int main(){
	cin>>n>>m;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
			if(a[i][j]==0) wall.push_back({i, j});			
		}
	}
	
	for(int i=0; i<wall.size(); i++){
		for(int j=0; j<i; j++){
			for(int k=0; k<j; k++){
				a[wall[i].first][wall[i].second]=1;
				a[wall[j].first][wall[j].second]=1;
				a[wall[k].first][wall[k].second]=1;				
				
				mx=max(mx, solve());
				
				fill(&visited[0][0], &visited[0][0] + 10 * 10 , 0);
				
				a[wall[i].first][wall[i].second]=0;
				a[wall[j].first][wall[j].second]=0;
				a[wall[k].first][wall[k].second]=0;		
			}
		}
	}
	
	cout<<mx;
	
	return 0;
}