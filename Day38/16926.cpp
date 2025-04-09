#include <bits/stdc++.h>
using namespace std;

int arr[300][300];
int n, m, r;

int main() {
    cin >> n >> m >> r;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) 
            cin >> arr[i][j];

    int layers = min(n, m) / 2;

    while (r--) {
        for (int layer = 0; layer < layers; layer++) {
            int top = layer;
            int bottom = n - 1 - layer;
            int left = layer;
            int right = m - 1 - layer;

            // 한 칸씩 회전 (값을 미리 저장)
            int prev = arr[top][left];

            // 위 -> 아래
            for (int i = top + 1; i <= bottom; i++) {
                swap(arr[i][left], prev);
            }
            // 왼 -> 오
            for (int i = left + 1; i <= right; i++) {
                swap(arr[bottom][i], prev);
            }
            // 아래 -> 위
            for (int i = bottom - 1; i >= top; i--) {
                swap(arr[i][right], prev);
            }
            // 오 -> 왼
            for (int i = right - 1; i >= left; i--) {
                swap(arr[top][i], prev);
            }
        }
    }

    // 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
