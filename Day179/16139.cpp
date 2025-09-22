#include <bits/stdc++.h>
using namespace std;

int arr[26][200005]; 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n = s.size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 26; j++) {
            arr[j][i+1] = arr[j][i]; 
        }
        arr[s[i]-'a'][i+1]++;
    }

    int T;
    cin >> T;
    while (T--) {
        char c;
        int l, r;
        cin >> c >> l >> r;

        cout << arr[c-'a'][r+1] - arr[c-'a'][l] << '\n';
    }

    return 0;
}
