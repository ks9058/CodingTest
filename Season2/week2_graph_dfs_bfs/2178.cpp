#include <bits/stdc++.h>
using namespace std;

int n,m;

bool a[104][104];
int visited[104][104];

int dy[]={-1,0,1,0};
int dx[]={0,1,0,-1};

void bfs(int y, int x){
	queue <pair<int, int>> q;
	visited[y][x]=1;
	q.push({y,x});
	
	while(q.size()){
		tie(y,x)=q.front();
		q.pop();
		for(int i=0; i<4; i++){
			int ny=y+dy[i];
			int nx=x+dx[i];
			
			if(ny<=0 || nx <= 0 || ny > n || nx > m) continue;
			if(visited[ny][nx]) continue;
			if(a[ny][nx]==0) continue;
			
			visited[ny][nx]= visited[y][x]+1;
			q.push({ny, nx});
		}
	}
	return;
}

int main(){
	cin>>n>>m;
	string str;
	
	for(int i=1; i<=n; i++){
		cin>>str;
		for(int j=0; j<str.size(); j++){
			if(str[j]=='0'){
				a[i][j+1]=0;				
			}else if(str[j]=='1'){
				a[i][j+1]=1;
			}
		}
	}
	bfs(1,1);
	
	cout<<visited[n][m];
	return 0;
}