#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<int, string>> v;

bool cmp(const pair<int, string>& a, const pair<int, string>& b) {
    return a.first < b.first;  // 나이 기준 오름차순
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        int age;
        string name;
        cin >> age >> name;
        v.push_back({age, name});
    }

    // stable_sort: 같은 나이일 때 입력 순서를 유지
    stable_sort(v.begin(), v.end(), cmp);

    for (auto& a : v) {
        cout << a.first << " " << a.second << '\n';
    }

    return 0;
}
