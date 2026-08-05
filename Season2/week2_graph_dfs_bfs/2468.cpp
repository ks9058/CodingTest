#include <bits/stdc++.h>
using namespace std;

int dy[]={-1, 0, 1, 0};
int dx[]={0, 1, 0, -1};

int n, ret, cnt;
bool visited[104][104];
int a[104][104];

void dfs(int y, int x, int k){
	visited[y][x]=1;
	
	for(int i=0; i<4; i++){
		int ny=y+dy[i];
		int nx=x+dx[i];
		
		if(ny<0 || nx <0 || ny >=n ||nx >= n) continue;
		if(visited[ny][nx]) continue;
		if(a[ny][nx]<=k) continue;
		
		dfs(ny, nx, k);
	}	
}

int main(){
	cin>>n;
	
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}
	for(int k=0; k<=100; k++){
		fill(&visited[0][0], &visited[103][104], 0);
		cnt=0;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(!visited[i][j] && a[i][j]>k){
					cnt++;
					dfs(i, j, k);
			}
		}
		ret=max(ret, cnt);
	}
	
	}	
	cout<<ret;
	
	return 0;
}