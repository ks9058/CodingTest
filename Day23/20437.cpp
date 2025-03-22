#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--) {
        string W;
        int k;
        cin >> W >> k;

        if (k == 1) {  // k가 1이면, 최소 길이도 1, 최대 길이도 1
            cout << "1 1\n";
            continue;
        }

        unordered_map<char, vector<int>> char_positions;
        int min_length = INT_MAX, max_length = -1;

        // 각 문자의 등장 위치 저장
        for (int i = 0; i < W.size(); i++) {
            char_positions[W[i]].push_back(i);
        }

        // 각 문자별로 최소, 최대 길이 계산
        for (auto& entry : char_positions) {
            vector<int>& positions = entry.second;

            if (positions.size() < k) continue;  // k번 미만으로 등장하면 무시

            // k개의 연속된 인덱스를 사용하여 부분 문자열 길이 계산
            for (int j = 0; j <= positions.size() - k; j++) {
                int length = positions[j + k - 1] - positions[j] + 1;
                min_length = min(min_length, length);
                max_length = max(max_length, length);
            }
        }

        if (min_length == INT_MAX)
            cout << "-1\n";
        else
            cout << min_length << " " << max_length << "\n";
    }

    return 0;
}
