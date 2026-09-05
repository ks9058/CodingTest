#include <bits/stdc++.h>
using namespace std;

int n, ret;
bool is_prime[4000004];
vector<int> primes;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    if (n < 2) {
        cout << 0 << "\n";
        return 0;
    }

    // 1. 에라토스테네스의 체로 소수 구하기 (O(N log log N))
    fill(is_prime + 2, is_prime + n + 1, true);
    for (int i = 2; i * i <= n; i++) {
        if (!is_prime[i]) continue;
        for (int j = i * i; j <= n; j += i) {
            is_prime[j] = false;
        }
    }

    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) primes.push_back(i);
    }

    // 2. 투 포인터로 연속합 계산 (O(Primes 개수))
    int l = 0, r = 0, sum = 0;
    while (true) {
        if (sum >= n) {
            sum -= primes[l++];
        } else if (r == primes.size()) {
            break;
        } else {
            sum += primes[r++];
        }

        if (sum == n) ret++;
    }

    cout << ret << "\n";
    return 0;
}