#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[100004];

bool check(int capacity) {
    int cnt = 1;       // 첫 번째 블루레이
    int sum = 0;       // 현재 블루레이에 담긴 강의 시간

    for (int i = 0; i < n; i++) {
        if (sum + a[i] > capacity) {
            // 새 블루레이 사용
            cnt++;
            sum = a[i];
        } else {
            sum += a[i];
        }
    }

    return cnt <= m;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    int lo = 0;
    int hi = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        lo = max(lo, a[i]); // 최소 용량은 가장 긴 강의
        hi += a[i];         // 최대 용량은 전체 합
    }

    int answer = hi;

    while (lo <= hi) {
        int mid = (lo + hi) / 2;

        if (check(mid)) {
            answer = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    cout << answer << '\n';

    return 0;
}