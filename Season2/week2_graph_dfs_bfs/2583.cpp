#include <bits/stdc++.h>
using namespace std;

int dy[]={-1, 0, 1, 0};
int dx[]={0, 1, 0, -1};

int n, m, k, ret, cnt;
int a[104][104];
int visited[104][104];

vector<int> v;

void dfs(int y, int x){
	visited[y][x]=1;
	
	for(int i=0; i<4; i++){
		int ny=y+dy[i];
		int nx=x+dx[i];
		
		if(ny< 0 || nx<0 || ny >= n || nx >= m) continue;
		if(visited[ny][nx]) continue;
		if(a[ny][nx]==1) continue;
		
		cnt++;
		dfs(ny, nx);
	}
}


int main(){
	cin>> n>> m>> k;
	
	for(int i=0; i<k; i++){
		int l_x, l_y, r_x, r_y;
		cin>>l_x>>l_y>>r_x>>r_y;
		
		for(int i=l_y; i<r_y; i++){
			for(int j=l_x; j<r_x; j++){
				a[i][j]=1;
			}
		}
	}

	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(!visited[i][j]&&a[i][j]==0){
				cnt=0;
				ret++;
				dfs(i, j);	
				v.push_back(cnt+1);
			}
		}
	}
	cout<<ret<<'\n';
	sort(v.begin(), v.end());
	for(int a: v){
		cout<<a<<' ';	
	}
	return 0;
}