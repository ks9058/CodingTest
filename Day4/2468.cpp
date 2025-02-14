#include <bits/stdc++.h>
using namespace std;

int n;
int maxmax=0;
int a[100][100];
int visited[100][100];
int dy[]={-1,0,1,0};
int dx[]={0,1,0,-1};
int ret;
int ret_max=0;
int k=0;


void dfs(int y, int x){
	visited[y][x]=1;
	
	for(int i=0; i<4; i++){
		int ny=y+dy[i];
		int nx=x+dx[i];
		
		if(ny<0||nx<0||ny>=n||nx>=n) continue;
		if(visited[ny][nx]!=1&&a[ny][nx]>=k) dfs(ny, nx);
	}
	return;
}


int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
			if(a[i][j]>maxmax) maxmax=a[i][j];	
		}
	}

	for(k=1; k<=maxmax; k++){
		fill(&visited[0][0],&visited[99][100],0);
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(a[i][j]>=k&&visited[i][j]==0) {
				ret_max++;
				dfs(i,j);	
				}	
			}
		}
		if(ret_max>ret) ret=ret_max;
		ret_max=0;		
	}
	cout<<ret;
	return 0;
}