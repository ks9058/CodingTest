#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, num;
    cin >> n;
    
    stack<int> st;
    vector<char> v;
    int cur = 1;

    for (int i = 0; i < n; ++i) {
        cin >> num;
        
        while (cur <= num) {
            st.push(cur++);
            v.push_back('+');
        }
		//top이num인지 확인 
        if (st.top() == num) {
            st.pop();
            v.push_back('-');
        } else {
            cout << "NO\n";
            return 0;
        }
    }

    for (char c : v) {
        cout << c << '\n';
    }

    return 0;
}
