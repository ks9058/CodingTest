#include <bits/stdc++.h>
using namespace std;

map<string, int> mp; //map은 사전순으로 자동 정렬 
int cnt;

int main() {
    string str;
    while (getline(cin, str)) {
        mp[str]++;
        cnt++;
    }

    for (auto& a : mp) {
        double percentage = (double)a.second / cnt * 100; //백분율 계산 
        cout << fixed << setprecision(4) << a.first << " " << percentage << '\n';
    }

    return 0;
}
