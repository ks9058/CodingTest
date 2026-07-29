#include <bits/stdc++.h>
using namespace std;

struct cmp {
    bool operator()(int a, int b) {
        if(abs(a) == abs(b)) return a > b; // 절댓값 같으면 더 작은 값(음수 우선)
        return abs(a) > abs(b);            // 절댓값 작은 것 우선
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int, vector<int>, cmp> pq;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x == 0){
            if(pq.empty()) cout << "0\n";
            else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        } else {
            pq.push(x);
        }
    }
    return 0;
}
