#include <bits/stdc++.h>
using namespace std;

string str;
int cnt[200];
int mx, ok;
char word;

int main() {
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 97 && str[i] <= 122) {
			cnt[str[i] - 32]++;
			if (mx <= cnt[str[i] - 32]) mx = cnt[str[i] - 32];
		}
		else if (str[i] >= 65 && str[i] <= 90) {
			cnt[str[i]]++;
			if (mx <= cnt[str[i]]) mx = cnt[str[i]];
		}
	}
	for (int i = 0; i < 200; i++) {
		if (mx <= cnt[i]) {
			word = i;
			ok++;
		}
	}
	if (ok >= 2)cout << "?";
	else cout << word;
	return 0;
}