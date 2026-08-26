#include <bits/stdc++.h>
using namespace std;

int n, mp, mf, ms, mv, a[20][20], ret1 = INT_MAX;
vector<int> ret, temp;

int main() {
    // 입출력 속도 향상
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n;
    cin >> mp >> mf >> ms >> mv;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> a[i][j];
        }
    }    
    
    for (int i = 0; i < (1 << n); i++) {
        int p = 0, f = 0, s = 0, v = 0, price = 0;
        temp.clear(); 

        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) { 
                temp.push_back(j + 1); 
                
                p += a[j][0];
                f += a[j][1];
                s += a[j][2];
                v += a[j][3];
                price += a[j][4];
            }
        }
        
        if (p >= mp && f >= mf && s >= ms && v >= mv) {
            if (ret1 > price) { // 더 싼 가격을 찾은 경우
                ret1 = price;        
                ret = temp;     
            } else if (ret1 == price) { // 가격이 같은 경우
                if (temp < ret) { 
                    ret = temp;
                }
            }
        } 
    }
    
    if (ret.empty()) cout << -1 << '\n';
    else {
        cout << ret1 << '\n';
        for (int k : ret) {
            cout << k << ' ';
        }
    }
    
    return 0;
}