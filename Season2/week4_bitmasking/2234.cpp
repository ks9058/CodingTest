#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[54][54];
int visited[54][54];
int room_size[2504]; // room_id별 방 크기 저장

// 서(1), 북(2), 동(4), 남(8) 순서에 맞춘 dy, dx
int dy[] = {0, -1, 0, 1};
int dx[] = {-1, 0, 1, 0};

int ret1, ret2 = 0, ret3 = 0;

int dfs(int y, int x, int room_id) {
    visited[y][x] = room_id;
    int cnt = 1;

    for (int i = 0; i < 4; i++) {
        // 현재 칸에서 i번째 방향에 벽이 있다면 통과 불가
        if (a[y][x] & (1 << i)) continue;

        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || nx < 0 || ny >= m || nx >= n) continue;
        if (visited[ny][nx]) continue;

        cnt += dfs(ny, nx, room_id);
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // 1 & 2. 방 개수와 최대 방 크기 구하기 + 방 번호 마킹
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                ret1++;
                room_size[ret1] = dfs(i, j, ret1);
                ret2 = max(ret2, room_size[ret1]);
            }
        }
    }

    // 3. 인접한 다른 방 번호를 합쳐서 최대 크기 갱신
    for (int y = 0; y < m; y++) {
        for (int x = 0; x < n; x++) {
            for (int i = 0; i < 4; i++) {
                int ny = y + dy[i];
                int nx = x + dx[i];

                if (ny < 0 || nx < 0 || ny >= m || nx >= n) continue;

                // 서로 다른 방 번호가 인접해 있다면 두 방의 합 계산
                if (visited[y][x] != visited[ny][nx]) {
                    ret3 = max(ret3, room_size[visited[y][x]] + room_size[visited[ny][nx]]);
                }
            }
        }
    }

    cout << ret1 << '\n';
    cout << ret2 << '\n';
    cout << ret3 << '\n';

    return 0;
}