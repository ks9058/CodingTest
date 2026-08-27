#include <bits/stdc++.h>
using namespace std;

int n, m, mx;
char a[54][54];
int visited[54][54];

int dy[]={-1, 0, 1, 0};
int dx[]={0, 1, 0, -1};



void bfs(int y, int x){
	fill(&visited[0][0], &visited[0][0] + (54 * 54), 0);
	visited[y][x]=1;
	queue<pair<int, int>> q;
	q.push({y, x});
	
	while(q.size()){
		tie(y, x)= q.front();
		q.pop();
		
		for(int i=0; i<4; i++){
			int ny = y + dy[i];
			int nx = x + dx[i];
			
			if(ny < 0 || nx < 0 || ny>=n || nx >=m) continue;
			if(visited[ny][nx]) continue;
			if(a[ny][nx]=='W') continue;
			
			visited[ny][nx] = visited[y][x] +1;
			q.push({ny, nx});
			mx = max(mx , visited[ny][nx]);
		}		
	}
	
	
		
}



int main(){
	cin>>n>>m;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i][j] == 'L') bfs(i, j);
		}
	}
	
	
	cout<< mx -1;
	return 0;
}