#include <bits/stdc++.h>
using namespace std;

int dy[]={-1,0,1,0};
int dx[]={0,1,0,-1};
int a[54][54];
int visited[54][54];
int T;
int n,m,k;
int lx,ly;
int ret;
int ny,nx; 

void dfs(int y, int x){
	visited[y][x]=1;
	
	for(int i=0; i<4; i++){
		ny=y+dy[i];
		nx=x+dx[i];
		
		if(nx<0||ny<0||nx>=m||ny>=n) continue;
		if(!visited[ny][nx]&&a[ny][nx]==1) dfs(ny, nx);
	}
	return;
}


int main(){
	cin>>T;
	for(int b=0; b<T; b++){
        // 초기화 꼭 해주기
		fill(&a[0][0],&a[53][54],0); 
		fill(&visited[0][0],&visited[53][54],0);
		cin>>n>>m>>k;	
			for(int i=0; i<k; i++){
				cin>>ly>>lx;
				a[ly][lx]=1;
			}
		ret=0;
			for(int i=0; i<n; i++){
				for(int j=0; j<m; j++){
					if(a[i][j]&&visited[i][j]==0){
					ret++;
					dfs(i,j);
					}
				}
			}
		cout<<ret<<'\n';
	}
	return 0;
}