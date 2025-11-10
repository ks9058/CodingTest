#include <bits/stdc++.h>
using namespace std;

int dx[3]={-1, 0, 1};
int arr[10][10]={0,};
int n,m, ret=INT_MAX;

void dfs(int y, int x, int dir, int cnt){
	if(y==n-1){
		ret=min(ret, cnt);
		return;
	}
	
	for(int i=0; i<3; i++){
		if(i==dir) continue;
		int cx=x+dx[i];
		int cy=y+1;
		
		if(cx < 0 || cx>=m) continue;
		dfs(cy, cx, i, cnt+arr[cy][cx]);		
	}
}


int main(){
	cin>>n>>m;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>arr[i][j];
		}
	}
	
	for(int j=0; j<m; j++){
		dfs(0, j, -1, arr[0][j]);
	}
	
	cout<<ret;
	return 0;
}