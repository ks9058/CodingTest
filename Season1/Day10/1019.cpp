#include <bits/stdc++.h>
using namespace std;

void count_digit_occurrences(int n) {
    vector<long long> count(10, 0); // 0~9 등장 횟수 저장 배열
    long long digit = 1; // 자리수 (1의 자리, 10의 자리, 100의 자리 등)
    
    while (digit <= n) {
        long long left = n / (digit * 10);
        long long cur = (n / digit) % 10;
        long long right = n % digit;

        // 왼쪽 숫자에 따라 0~9가 반복되는 횟수
        for (int i = 0; i < 10; i++) {
            count[i] += left * digit;
        }

        // 현재 자리 숫자에 따른 추가 반영
        for (int i = 0; i < cur; i++) {
            count[i] += digit;
        }
        count[cur] += right + 1; // 현재 숫자까지 포함

        // 0은 앞부분에서 카운트되므로 보정 (맨 앞자리가 0이면 제외)
        count[0] -= digit;

        digit *= 10; // 다음 자리로 이동
    }

    // 결과 출력
    for (int i = 0; i < 10; i++) {
        cout << count[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    count_digit_occurrences(n);
    return 0;
}
