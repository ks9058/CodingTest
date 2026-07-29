#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x;
    string str;
    int s = 0; // 집합 상태 (비트마스크)
    cin >> n;

    while (n--) {
        cin >> str;

        if (str == "add") {
            cin >> x;
            s |= (1 << x);
        } else if (str == "remove") {
            cin >> x;
            s &= ~(1 << x);
        } else if (str == "check") {
            cin >> x;
            cout << ((s & (1 << x)) ? 1 : 0) << '\n';
        } else if (str == "toggle") {
            cin >> x;
            s ^= (1 << x);
        } else if (str == "all") {
            s = (1 << 21) - 1; // 1~20 모두 포함
        } else if (str == "empty") {
            s = 0;
        }
    }
}
