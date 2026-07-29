#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str, del_str;
    cin>> str>>del_str;

    vector <char> v;
    int del_len=del_str.size();

    for (char c : str) {
        v.push_back(c);

        // 폭발 문자열의 끝과 같은 문자가 들어오면 검사
        if (v.size() >= del_len && c == del_str.back()) {
            bool match = true;
            for (int i = 0; i < del_len; i++) {
                if (v[v.size() - del_len + i] != del_str[i]) {
                    match = false;
                    break;
                }
            }
            if (match) {
                for (int i = 0; i < del_len; i++) v.pop_back();
            }
        }
    }

    if (v.empty()) cout<<"FRULA\n";
    else {
        for (char c : v) cout<< c;
        cout<<"\n";
    }

    return 0;
}
