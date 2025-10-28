#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> v(M);
    for (int i = 0; i < M; i++) cin >> v[i];

    int left = 1, right = N, ans = N;
    while (left <= right) {
        int mid = (left + right) / 2;
        int last = 0; // 마지막으로 밝힌 위치
        bool ok = true;

        for (int i = 0; i < M; i++) {
            if (v[i] - mid > last) { // 비어 있는 구간 발생
                ok = false;
                break;
            }
            last = v[i] + mid; // 현재 가로등이 밝히는 끝 위치
        }

        if (last < N) ok = false; // 끝까지 밝히지 못한 경우

        if (ok) { // 가능하면 더 낮은 높이 시도
            ans = mid;
            right = mid - 1;
        } else { // 불가능하면 높이를 더 높여야 함
            left = mid + 1;
        }
    }

    cout << ans;
}
