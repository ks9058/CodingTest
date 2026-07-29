#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int t;
        cin >> t;
        vector<int> v;
        int cnt = 0;

        for (int i = 0; i < 20; i++) {
            int h;
            cin >> h;

            // 삽입 위치 찾기
            int pos = v.size(); 
            for (int j = 0; j < v.size(); j++) {
                if (v[j] > h) {
                    pos = j;
                    break;
                }
            }

            // 뒤로 밀린 학생 수 계산
            cnt += v.size() - pos;

            // 삽입
            v.insert(v.begin() + pos, h);
        }

        cout << t << " " << cnt << '\n';
    }
    return 0;
}
