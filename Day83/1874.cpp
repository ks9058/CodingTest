#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    stack<int> st;
    vector<char> v;
    int num = 1;
    bool isPossible = true;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        // x가 나올 때까지 push
        while (num <= x) {
            st.push(num++);
            v.push_back('+');
        }

        // 스택의 top이 x와 같다면 pop
        if (st.top() == x) {
            st.pop();
            v.push_back('-');
        } else {
            // 스택 top이 x보다 크면 불가능한 수열
            isPossible = false;
            break;
        }
    }

    if (!isPossible) {
        cout << "NO\n";
    } else {
        for (char c : v) {
            cout << c << '\n';
        }
    }

    return 0;
}
