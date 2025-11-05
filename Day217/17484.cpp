#include <bits/stdc++.h>
using namespace std;

int N, M;
int board[6][6];
int answer = INT_MAX;
int dc[3] = {-1, 0, 1}; // 좌하, 아래, 우하

void dfs(int r, int c, int dir, int sum) {
    if (r == N - 1) {
        answer = min(answer, sum);
        return;
    }

    for (int d = 0; d < 3; d++) {
        if (d == dir) continue; // 같은 방향 연속 불가
        int nr = r + 1;
        int nc = c + dc[d];
        if (nc < 0 || nc >= M) continue;
        dfs(nr, nc, d, sum + board[nr][nc]);
    }
}

int main() {

    cin >> N >> M;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> board[i][j];

    for (int j = 0; j < M; j++) {
        dfs(0, j, -1, board[0][j]);
    }

    cout << answer << "\n";
}
