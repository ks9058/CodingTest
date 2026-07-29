#include <bits/stdc++.h>
using namespace std;

int a[1000][1000]; // 최대 1000x1000 크기 배열
int n, target;
int dx[4] = {1, 0, -1, 0}; // 아래 → 오른쪽 → 위 → 왼쪽
int dy[4] = {0, 1, 0, -1};

int main() {
    cin >> n >> target; // 입력: N과 찾을 숫자

    int x = 0, y = 0, dir = 0; // 시작 위치 및 방향
    int num = n * n; // 숫자는 N*N부터 시작

    int target_x = -1, target_y = -1; // 찾을 숫자의 좌표 저장 변수

    while (num > 0) {
        a[x][y] = num;
        if (num == target) { // 찾고자 하는 숫자 발견
            target_x = x + 1; // 1-based index 보정
            target_y = y + 1;
        }
        num--;

        // 다음 위치 계산
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        // 범위를 벗어나거나 이미 값이 채워져 있으면 방향 변경
        if (nx < 0 || nx >= n || ny < 0 || ny >= n || a[nx][ny] != 0) {
            dir = (dir + 1) % 4; // 방향 전환
            nx = x + dx[dir];
            ny = y + dy[dir];
        }

        // 이동
        x = nx;
        y = ny;
    }

    // 달팽이 배열 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    // target 숫자의 위치 출력
    cout << target_x << " " << target_y << "\n";

    return 0;
}
