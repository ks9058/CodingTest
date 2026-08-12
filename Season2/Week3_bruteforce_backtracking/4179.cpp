#include <bits/stdc++.h>
using namespace std;

char a[1004][1004];
int visited[1004][1004];
int fire[1004][1004];
 
int n, m;

int dy[]={-1, 0, 1, 0};
int dx[]={0, 1, 0, -1};

void bfs(int y, int x, char k){
	queue<pair<int, int>> q;
	q.push({y, x});
	visited[y][x]=1;
	
	while(q.size()){
		tie(y, x)=q.front();
		q.pop();
		
		for(int i=0; i<4; i++){
			int ny = y + dy[i];
			int nx = x + dx[i];
			
			if(ny< 0 || nx < 0 || ny >= n || nx >= m) continue;
			if(visited[ny][nx]) continue;
			if(a[ny][nx] == '#') continue;
			if(a[ny][nx] == k) continue;
			visited[ny][nx]=visited[y][x]+1;
			q.push({ny, nx});
		}
	}
}

int main(){
	cin>>n>>m;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}
	
	 
	fill(&fire[0][0], &fire[0][0] + (1004 * 1004), INT_MAX);
	//불 
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(visited[i][j] == 0 && a[i][j] == 'F'){

				bfs(i, j, 'J');
				
				//작은것만 남기기  
				for(int k=0; k <n; k++){
					for(int l=0; l <m; l++){
						fire[k][l]=min(visited[k][l], fire[k][l]);
					
					}
				}
				
				fill(&visited[0][0], &visited[0][0] + (1004 * 1004), 0);		
			} 
		}
	}
	
	
	//지훈 
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(visited[i][j] == 0 && a[i][j] == 'J') bfs(i, j, 'F');
		}
	}
	

	

	bool check=1;
	int ret=INT_MAX;
	//상단 
	for(int i=0; i<m; i++){
		if(a[0][i] == 'J'){
			ret=1;
			check=0;
			break;
		}
		if(a[0][i] == '.'  && fire[0][i] > visited[0][i] ){
			ret=min(ret, visited[0][i]);
			check=0;
		}	
	}

	//하단 
	for(int i=0; i<m; i++){
		if(a[n-1][i] == 'J'){
			ret=1;
			check=0;
			break;
		}
		if(a[n-1][i] == '.' && fire[n-1][i] > visited[n-1][i] ){
			ret=min(ret, visited[n-1][i]);
			check=0;
		}	
	}
	
	
	//좌측 
	for(int i=0; i<n; i++){
		if(a[i][0] == 'J'){
			ret=1;
			check=0;
			break;
		}
		if(a[i][0] == '.' && fire[i][0] > visited[i][0] ){
			ret=min(ret, visited[i][0]);
			check=0;
			
		}	
	}
	
	
	//우측 
	for(int i=0; i<n; i++){
		if(a[i][m-1] == 'J'){
			ret=1;
			check=0;
			break;
		}
		if(a[i][m-1] == '.' &&fire[i][m-1] > visited[i][m-1] ){
			ret=min(ret, visited[i][m-1]);
			check=0;
		}	
	}
	
	
	
	if(check) cout<<"IMPOSSIBLE";
	else cout<< ret;
	
	return 0;
}