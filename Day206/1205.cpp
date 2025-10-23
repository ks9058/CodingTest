#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p;
    long long ns;
    cin >> n >> ns >> p;

	//n<p일 수 있기 때문에 push_back으로 처리 
    vector<long long> v;
    for (int i = 0; i < n; i++) {
        long long s;
        cin >> s;
        v.push_back(s);
    }

    // 랭킹이 비어 있는 경우
    if (n == 0) {
        cout << 1;
        return 0;
    }

    // 꽉 찼는데 내 점수가 마지막보다 낮거나 같으면 진입 불가
    if (n == p && ns <= v.back()) {
        cout << -1;
        return 0;
    }

    int rank = 1;
    for (int i = 0; i < n; i++) {
        if (v[i] > ns) rank++;
        else break;
    }

    cout << rank;
    return 0;
}
