#include<bits/stdc++.h>
using namespace std;
int a[10][10], visited[10][10], n, m, ret;
vector<pair<int, int>> virusList, wallList;
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};

void dfs(int y, int x){
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny >= n || nx < 0 || nx >= m || visited[ny][nx] || a[ny][nx] == 1) continue;
        visited[ny][nx] = 1;
        dfs(ny, nx);
    }
    return;
}
int solve(){
    fill(&visited[0][0], &visited[0][0] + 10 * 10, 0); 
    for(pair<int, int> b : virusList){
        visited[b.first][b.second] = 1;
        dfs(b.first, b.second);
    } 

    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 0 && !visited[i][j])cnt++; //a[i][j] == 0은 빈칸, !visited[i][j]은 바이러스가 퍼지지 않은 곳 
        }
    } 
    return cnt;  
}
int main(){
    cin >> n >> m;
    for(int i = 0; i <n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j]; //모든 공간의 좌표 입력 받음 
            //push_back을 했기 때문에 순서대로 저장 
            if(a[i][j] == 2) virusList.push_back({i, j}); // 바이러스의 좌표 따로 저장 
            if(a[i][j] == 0) wallList.push_back({i, j}); //벽을 세울 수 있는 공간의 좌표 따로 저장 
        }
    }
    for(int i = 0; i < wallList.size(); i++){ // wallList에 좌표가 저장된 사이즈만큼 반복  
        for(int j = 0; j < i; j++){
            for(int k = 0; k < j; k++){
            	//wallList는 순서대로 저장되어있다. 인덱스 i,j,k 조합으로 3개를 반복해서 뽑아내면 인덱스에 있는 값인 좌표가 나온다.  
                a[wallList[i].first][wallList[i].second] = 1; //첫번째 벽 위치 
                a[wallList[j].first][wallList[j].second] = 1; //두번째 벽 위치 
                a[wallList[k].first][wallList[k].second] = 1; //세번째 벽 위치 
        	    
				// 바이러스 퍼뜨리고 안전 영역 크기 계산
                ret = max(ret, solve());
                
                //벽을 원상복구 
                a[wallList[i].first][wallList[i].second] = 0;
                a[wallList[j].first][wallList[j].second] = 0;
                a[wallList[k].first][wallList[k].second] = 0;
            }
        }
    }
    cout << ret << "\n";
    return 0;
}
