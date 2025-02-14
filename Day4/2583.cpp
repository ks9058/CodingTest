#include <bits/stdc++.h>
using namespace std;

int visited[100][100];
int a[100][100];
int lx,ly, rx, ry;
int n,m,k;
int dy[]={-1,0,1,0};
int dx[]={0,1,0,-1};
vector<int> ret;

int dfs(int y, int x){
	visited[y][x]=1;
	int ret=1;
	for(int i=0; i<4; i++){
		int ny=y+dy[i];
		int nx=x+dx[i];
		
		if(ny<0||nx<0||ny>=n||nx>=m) continue;
		if(a[ny][nx]==0&&visited[ny][nx]==0){
			
			ret=ret+dfs(ny,nx); //재귀함수를 반복할때마다 ret++와 같은 효과를 준다.	
		}
	}
	return ret;
}

int main(){
	cin>>n>>m>>k;
	for(int i=0; i<k; i++){
		cin>>lx>>ly>>rx>>ry;;
		for(int r=lx; r<rx; r++){
			for(int h=ly; h<ry; h++){
				a[h][r]=1;
			}
		}	
			
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i][j]==0&&visited[i][j]==0){
				ret.push_back(dfs(i, j));//ret값을 순서대로 벡터에 저장 
			}
		}
	}	
	cout<<ret.size()<<'\n';
	sort(ret.begin(), ret.end());
	for(int i:ret) cout<<i<<' ';
	
	return 0;
}


/* 내가 처음 짠 코드
#include <bits/stdc++.h>
using namespace std;

int visited[100][100];
int a[100][100];
int lx,ly, rx, ry;
int n,m,k;
int retarr[100]; //배열을 만들어서 dfs함수가 재귀호출 될때마다 +1해서 안에 넣음
int dy[]={-1,0,1,0};
int dx[]={0,1,0,-1};
int ret=0;

void dfs(int y, int x, int ret){
	visited[y][x]=1;
	retarr[ret]++;
	for(int i=0; i<4; i++){
		int ny=y+dy[i];
		int nx=x+dx[i];
		
		if(ny<0||nx<0||ny>=n||nx>=m) continue;
		if(a[ny][nx]==0&&visited[ny][nx]==0){
			
			dfs(ny,nx,ret);	
			
		}
	}
	
}

int main(){
	cin>>n>>m>>k;
	for(int i=0; i<k; i++){
		cin>>lx>>ly>>rx>>ry;;
		for(int r=lx; r<rx; r++){
			for(int h=ly; h<ry; h++){
				a[h][r]=1;
			}
		}	
			
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i][j]==0&&visited[i][j]==0){
				dfs(i,j,ret);
				ret++;
			}
		}
	}	
	cout<<ret<<'\n';
	sort(&retarr[0],&retarr[100]);
	for(int i:retarr){
		if(i!=0) cout<<i<<' ';
	}
	return 0;
}
*/