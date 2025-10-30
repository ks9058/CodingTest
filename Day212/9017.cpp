//MAP 풀이도 있으니 다시 풀어보기

#include <bits/stdc++.h>
using namespace std;
#define TEAM_SIZE 204

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        int arr[1004];
        int team[TEAM_SIZE];
        int score[TEAM_SIZE];
        int five[TEAM_SIZE];

        fill(&arr[0], &arr[1004], 0);
        fill(&team[0], &team[TEAM_SIZE], 0);
        fill(&score[0], &score[TEAM_SIZE], 0);
        fill(&five[0], &five[TEAM_SIZE], INT_MAX);

        // 입력 & 팀 인원수 체크
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            team[arr[i]]++;
        }

        // 유효 팀 (6명 이상)
        vector<int> valid(TEAM_SIZE, 0);
        for (int i = 1; i < TEAM_SIZE; i++) {
            if (team[i] >= 6) valid[i] = 1;
        }

        // 점수 계산
        vector<int> cnt(TEAM_SIZE, 0);
        int rank = 1;

        for (int i = 0; i < n; i++) {
            int t = arr[i];
            if (!valid[t]) continue;  // 6명 미만은 무시
            cnt[t]++;

            if (cnt[t] <= 4) {
                score[t] += rank;
            } else if (cnt[t] == 5) {
                five[t] = rank;
            }

            rank++;
        }

        // 우승팀 찾기
        int ret = 0;
        int ret_score = INT_MAX;
        int ret_five = INT_MAX;

        for (int i = 1; i < TEAM_SIZE; i++) {
            if (!valid[i]) continue;
            if (score[i] < ret_score) {
                ret = i;
                ret_score = score[i];
                ret_five = five[i];
            } else if (score[i] == ret_score) {
                if (five[i] < ret_five) {
                    ret = i;
                    ret_five = five[i];
                }
            }
        }

        cout << ret << '\n';
    }

    return 0;
}
