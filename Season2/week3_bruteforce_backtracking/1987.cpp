#include <bits/stdc++.h>
using namespace std;

int dy[]={-1, 0, 1, 0};
int dx[]={0, 1, 0, -1};
int visited[24][24];
char a[24][24];

int r, c, ret =INT_MIN;
vector<char>v;

void dfs(int y, int x){
	visited[y][x]=1;
	
	v.push_back(a[y][x]);
	
	
	int cnt=v.size();
	ret=max(ret, cnt);

	for(int i=0; i<4; i++){
		int ny=y+dy[i];
		int nx=x+dx[i];
		
		if(ny<0 || nx < 0 || ny>= r || nx >=c) continue;
		if(visited[ny][nx]) continue;
		
		bool check=0;
		
		for(char k : v){
			if(a[ny][nx]==k) check=1;
		}
		if(check) continue;
		
		dfs(ny, nx);
		v.pop_back();
		visited[ny][nx]=0;
	}	
}


int main(){
	cin>>r>>c;
	
	
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin>>a[i][j];
		}
	}	
	
	
	dfs(0,0);
	cout<<ret;
	return 0;
}