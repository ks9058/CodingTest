#include <bits/stdc++.h>
using namespace std;

#define SIZE 128
string str;
char mid;
int check = 0; // 홀수 개인 문자 개수 체크
int cnt[SIZE];

int main() {
    cin >> str;
    
    for(char c : str) {
        cnt[c]++;
    }

    for(int i = 0; i < SIZE; i++) {
        if(cnt[i] % 2) {
            check++;
            mid = i;
        }
    }

    if(check >= 2) {
        cout << "I'm Sorry Hansoo";
    } else {
        for(int i = 0; i < SIZE; i++) {
            if(cnt[i]) {
                for(int j = 0; j < cnt[i] / 2; j++) cout << (char)i;
            }
        }

        if(mid) cout << mid;

        for(int i = SIZE - 1; i >= 0; i--) {// 0 - 127라서 -1 
            if(cnt[i]) {
                for(int j = 0; j < cnt[i] / 2; j++) cout << (char)i;
            }
        }
    }

    return 0;
}
