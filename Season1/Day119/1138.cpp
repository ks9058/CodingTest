#include <bits/stdc++.h>
using namespace std;

int n;
int arr[14];
int ret[14];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 1; i <= n; i++) { // i = 현재 사람 번호 (1부터 시작)
        int cnt = arr[i - 1];      // 앞에 있어야 할 사람 수
        for (int j = 0; j < n; j++) {
            if (ret[j] == 0) {     // 빈 자리일 때만 카운트
                if (cnt == 0) {
                    ret[j] = i;    // 현재 사람을 이 위치에 배치
                    break;
                }
                cnt--;
            }
        }
    }

    for (int i = 0; i < n; i++) cout << ret[i] << ' ';
    return 0;
}
