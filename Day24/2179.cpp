#include <bits/stdc++.h>
using namespace std;

// 공통 접두사 길이를 구하는 함수
int commonPrefixLength(const string& a, const string& b) {
    int len = 0;
    while (len < a.size() && len < b.size() && a[len] == b[len]) {
        len++;
    }
    return len;
}

int main() {
    int N;
    cin >> N;
    vector<pair<string, int>> words; // {단어, 원래 인덱스}

    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        words.push_back({s, i});
    }

    int maxLen = 0;
    pair<int, int> bestPair = {-1, -1};

    // 모든 단어 쌍을 비교하여 가장 긴 접두사 찾기
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int prefixLen = commonPrefixLength(words[i].first, words[j].first);
            if (prefixLen > maxLen) {
                maxLen = prefixLen;
                bestPair = {i, j};
            }
        }
    }

    // 결과 출력
    cout << words[bestPair.first].first << endl;
    cout << words[bestPair.second].first << endl;

    return 0;
}
