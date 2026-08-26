#include <bits/stdc++.h>
using namespace std;

int n, m, mx = 0;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
int alpha[26]; // 알파벳(A~Z) 방문 여부를 체크
char a[24][24];

void dfs(int y, int x, int cnt) {
    // 최대 이동 횟수 갱신
    mx = max(mx, cnt);

    for(int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        // 맵 범위를 벗어나면 패스
        if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;

        int next_alpha = a[ny][nx] - 'A'; 

        // 이미 방문한 알파벳이면 패스
        if(alpha[next_alpha]) continue;

        // 다음 위치의 알파벳을 방문 처리하고 DFS 진행
        alpha[next_alpha] = 1;
        dfs(ny, nx, cnt + 1);
        alpha[next_alpha] = 0; // 백트래킹 (다른 경로 탐색을 위해 원상복구)
    }
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    alpha[a[0][0] - 'A'] = 1;
    dfs(0, 0, 1); // 1칸 방문한 상태로 탐색 시작

    cout << mx;
    return 0;
}