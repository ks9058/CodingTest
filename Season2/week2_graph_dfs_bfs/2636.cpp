#include <bits/stdc++.h>
using namespace std;


int dy[]={-1, 0, 1, 0};
int dx[]={0, 1, 0 ,-1};
int n, m, cnt, ret;
vector<pair<int, int>> v;

int a[104][104];
int visited[104][104];

void dfs(int y, int x){
	visited[y][x]=1; 		
	if(a[y][x]==1){
		v.push_back({y, x});
		return;
	}
	
	for(int i=0; i<4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		
		if(ny< 0 || nx <0 || ny >=n || nx >= m) continue;
		if(visited[ny][nx]==1) continue;
		dfs(ny, nx);
	}
}



int main(){
	cin>> n>> m;
	
	
	for(int i=0; i< n ; i++){
		for(int j=0; j< m; j++){
			cin>>a[i][j];
		}
	}
	
	
	while(1){
		v.clear();
		fill(&visited[0][0], &visited[0][0]+ 104 * 104, 0);
		dfs(0,0);
		
		cnt=v.size();
		for(auto k : v){
			a[k.first][k.second]=0;
		}
		
		int temp=0;
		int flag=0;
		
		for(int i=0; i< n ; i++){
			for(int j=0; j< m; j++){
				if(a[i][j]==1) temp++;
			}
		}
		
		ret++;
		if(temp==0) break;
	}
	
	cout<<ret<<'\n';
	cout<<cnt<<'\n';
	
	return 0;
}