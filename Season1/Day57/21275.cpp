#include <bits/stdc++.h>
using namespace std;

string a, b;
int check;
int ret_a, ret_b;
long long ret_x;

long long change(string str, int n) {
    long long result = 0;
    for (char c : str) {
        int val;
        if (isdigit(c)) val = c - '0';
        else val = toupper(c) - 'A' + 10;

        if (val >= n) return -1; // 진법에 맞지 않는 숫자를 포함하면 오류처리 

        if (result > (LLONG_MAX - val) / n) return -1; // 오버플로우 방지
        result = result * n + val; //핵심코드 
    }
    return result;
}

int main() {
    cin >> a >> b;

    for (int i = 2; i <= 36; i++) {
        long long tempA = change(a, i);
        if (tempA == -1) continue;

        for (int j = 2; j <= 36; j++) {
            if (i == j) continue;
            long long tempB = change(b, j);
            if (tempB == -1) continue;

            if (tempA == tempB) {
                if (check == 0) {
                    ret_x = tempA;
                    ret_a = i;
                    ret_b = j;
                } else if (ret_x != tempA) {
                    cout << "Multiple\n";
                    return 0;
                }
                check++;
            }
        }
    }

    if (check == 0) cout << "Impossible\n";
    else if (check == 1) cout << ret_x << ' ' << ret_a << ' ' << ret_b << '\n';
    else cout << "Multiple\n";

    return 0;
}
