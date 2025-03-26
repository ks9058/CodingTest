#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, bomb;
    cin >> s >> bomb;
    
    vector<char> stack;
    int bombSize = bomb.size();
    
    for (char c : s) {
        stack.push_back(c);
        
        // 스택의 마지막 부분이 폭발 문자열과 일치하는지 검사
        if (stack.size() >= bombSize) {
            bool isBomb = true;
            for (int i = 0; i < bombSize; i++) {
                if (stack[stack.size() - bombSize + i] != bomb[i]) {
                    isBomb = false;
                    break;
                }
            }
            if (isBomb) {
                for (int i = 0; i < bombSize; i++) {
                    stack.pop_back(); // 폭발 문자열 삭제
                }
            }
        }
    }
    
    // 결과 출력
    if (stack.empty()) {
        cout << "FRULA";
    } else {
        for (char c : stack) {
            cout << c;
        }
    }

    return 0;
}
