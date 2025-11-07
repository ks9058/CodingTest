#include <bits/stdc++.h>
using namespace std;
int n, m, ret=INT_MAX;
int arr[10][10];

int dx[3]={-1,0,1};

void dfs(int y, int x , int dir, int sum){
	if(y==n-1){
		ret=min(ret, sum);
		return;
	}
		
	for(int d=0; d<3; d++){
		if(d==dir) continue;
		int ny = y+1;
		int nx = x + dx[d];
		if(nx < 0 || nx>=m) continue;
		dfs(ny, nx, d, sum + arr[ny][nx]);
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