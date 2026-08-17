#include <bits/stdc++.h>
using namespace std;

int n, visited[14][14], a[14][14];
vector <pair<int, int>> v;
int ret = INT_MAX;

int dy[]={-1, 0, 1, 0};
int dx[]={0, 1 , 0, -1};

bool go(int y , int x){
	visited[y][x]=1;
	
	for(int i=0; i<4; i++){
		int ny=y+dy[i];
		int nx=x+dx[i];
		
		if(ny < 0 || nx <0 ||ny >= n ||nx>=n) return false;
		if(visited[ny][nx]) return false;
		
		visited[ny][nx]=1;
	}
	return true;
}

int main(){
	
	cin>>n;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
			if(i!=0 || j!=0) v.push_back({i,j});
		}
	}	
	
	for(int i=0; i<v.size(); i++){
		for(int j=0; j<i; j++){
			for(int k=0; k<j; k++){
				
				if(go(v[i].first, v[i].second) && go(v[j].first, v[j].second)&& go(v[k].first, v[k].second)){
					int cnt=0;
					for(int r=0; r<n; r++){
						for(int c=0; c<n; c++ ){
							if(visited[r][c]) cnt+=a[r][c];
						}
					}
					ret=min(ret, cnt);
				}
				
				fill(&visited[0][0],&visited[0][0]+(14*14), 0);
			}
		}
	}
	
	
	
	cout<<ret;
	
	return 0; 
}