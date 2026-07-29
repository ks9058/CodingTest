#include <bits/stdc++.h>
using namespace std;
int n,m, ret=INT_MAX;
int arr[10][10];
int dx[3]={-1, 0, 1};

void dfs(int y, int x, int lx, int cnt){
	if(y==n-1){
		ret=min(ret, cnt);
		return;	
	}
	
	for(int i=0; i<3; i++){
		if(lx == i) continue;
	
		int cx=x+dx[i];
		int cy=y+1;
		if(cx>=0 && cx<m) dfs(cy, cx, i, cnt+arr[cy][cx]);
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