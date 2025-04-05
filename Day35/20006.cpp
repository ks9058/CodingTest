#include <bits/stdc++.h>
using namespace std;

int p, m, l;
string nickname;
vector<pair<int, string>> room[300];
int rcnt = 0;

int main() {
    cin >> p >> m;

    for (int i = 0; i < p; i++) {
        cin >> l >> nickname;
        bool joined = false;

        for (int j = 0; j < rcnt; j++) {
            int host_level = room[j][0].first;
            //절대값 함수로 호스트 레벨과의 차이 계산하기
            if (abs(host_level - l) <= 10 && room[j].size() < m) {
                room[j].push_back({l, nickname});
                joined = true;
                break;
            }
        }

        if (!joined) {
            room[rcnt].push_back({l, nickname});
            rcnt++;
        }
    }

    for (int i = 0; i < rcnt; i++) {
        if (room[i].size() == m) cout << "Started!\n";
        else cout << "Waiting!\n";
        //람다함수 식으로 구현 간략화화
        sort(room[i].begin(), room[i].end(), [](auto &a, auto &b) {
            return a.second < b.second;
        });

        for (auto &player : room[i]) {
            cout << player.first << ' ' << player.second << '\n';
        }
    }

    return 0;
}
