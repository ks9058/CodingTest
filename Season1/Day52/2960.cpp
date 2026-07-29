#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<bool> is_prime(N + 1, true);
    int count = 0;
    int result = 0;

    for (int i = 2; i <= N; ++i) {
        if (is_prime[i]) {// 소수만 검사
            for (int j = i; j <= N; j += i) {
                if (is_prime[j]) {
                    is_prime[j] = false; //방문한 숫자 지우기
                    count++;
                    if (count == K) {
                        result = j;
                        break;
                    }
                }
            }
        }
        if (count == K) break;
    }

    cout << result;
    return 0;
}
