#include <bits/stdc++.h>
using namespace std;

int n;
char c[10];

// 부등호 조건 검사 함수
bool check(vector<int>& v) {
    for (int i = 0; i < n; i++) {
        if (c[i] == '<' && v[i] > v[i + 1]) return false;
        if (c[i] == '>' && v[i] < v[i + 1]) return false;
    }
    return true;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    vector<int> max_v, min_v;

    // 최댓값을 위한 배열 (가장 큰 숫자부터 n+1개 세팅)
    for (int i = 9; i > 9 - (n + 1); i--) max_v.push_back(i);
    
    // 최솟값을 위한 배열 (가장 작은 숫자부터 n+1개 세팅)
    for (int i = 0; i < n + 1; i++) min_v.push_back(i);

    // 최댓값 찾기 (가장 큰 조합부터 시작해서 내림차순 탐색)
    do {
        if (check(max_v)) break;
    } while (prev_permutation(max_v.begin(), max_v.end()));

    // 최솟값 찾기 (가장 작은 조합부터 시작해서 오름차순 탐색)
    do {
        if (check(min_v)) break;
    } while (next_permutation(min_v.begin(), min_v.end()));

    // 숫자 배열을 문자열처럼 바로 출력 (0으로 시작하는 경우 보존)
    for (int i : max_v) cout << i;
    cout << '\n';
    
    for (int i : min_v) cout << i;
    cout << '\n';

    return 0;
}