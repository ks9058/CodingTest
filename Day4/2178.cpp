#include <bits/stdc++.h>
using namespace std;

int a[104][104];
int dy[]={-1,0,1,0};
int dx[]={0,1,0,-1};
int visited[104][104];
int n,m;
int y,x;

void bfs(int start_y, int start_x){
	visited[start_y][start_x]=1;
	queue<pair<int, int>>q;
	q.push({start_y,start_x});
	
	while(q.size()){
		tie(y,x)=q.front();
		q.pop();	
		for(int i=0; i<4; i++){
		int ny=y+dy[i];	
		int nx=x+dx[i];
		
		if(visited[ny][nx]) continue;
		if(ny<1||nx<1||ny>n||nx>m) continue;
		if(a[ny][nx]==0) continue; //꼭 써주기
		
		visited[ny][nx]=visited[y][x]+1;
		q.push({ny,nx});
		}
	}
	return;
}


int main() {
    cin >> n >> m;
    string num;
    for (int i = 1; i <= n; i++) {
        cin >> num;
        for (int j = 1; j <= m; j++) {
            a[i][j] = num[j - 1] - '0';  // 문자 → 숫자로 변환, 이게 힘들면 scanf 쓰기
        }
    }

    bfs(1, 1);
    cout << visited[n][m];
    return 0;
}
