#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
int cnt;

int main() {
    string str;
	//ctrl + z로 입력종료 
    while (getline(cin, str)) {
        mp[str]++;
        cnt++;
    }

    for (auto& a : mp) {
        double percentage = (double)a.second / cnt * 100;
        cout << fixed << setprecision(4) << a.first << " " << percentage << '\n';
    }

    return 0;
}
