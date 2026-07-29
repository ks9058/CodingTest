#include <bits/stdc++.h>
using namespace std;
#define MX 500000

int check[1004], team[1004], five[1004];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> cnt; // 각 팀 출전 선수 수

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            cnt[a[i]]++;
        }

        // 6명 미만 팀 제거 -> 새로운 벡터 사용하여 O(n) 유지
        vector<int> valid_runners;
        for (int i = 0; i < n; i++) {
            if (cnt[a[i]] >= 6) valid_runners.push_back(a[i]);
        }

        fill(team, team + 1004, MX);
        fill(five, five + 1004, 0);
        unordered_map<int, int> rank;

        // 유효한 팀의 점수 계산
        for (int i = 0; i < valid_runners.size(); i++) {
            int t = valid_runners[i];
            rank[t]++;

            if (rank[t] <= 4) team[t] = (team[t] == MX ? 0 : team[t]) + (i + 1);
            else if (rank[t] == 5) five[t] = i + 1;
        }

        // 최소 점수 팀 찾기
        int best_team = -1, min_score = MX;
        for (auto &[t, _] : cnt) { // 사용하지 않는 변수를 관례적으로 _로 표기 
            if (cnt[t] < 6) continue;
            if (team[t] < min_score || (team[t] == min_score && five[t] < five[best_team])) {
                min_score = team[t];
                best_team = t;
            }
        }

        cout << best_team << '\n';
    }

    return 0;
}
