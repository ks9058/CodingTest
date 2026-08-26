#include <bits/stdc++.h>
using namespace std;

int n, ret = INT_MAX;
int a[14];
int visited[14];
vector<int> v[14];

int dfs(int here, int mask, bool isA) {
    visited[here] = 1;
    int cnt = 1; // 자기 자신을 포함하므로 1부터 시작
    
    for (int there : v[here]) {
        if (visited[there]) continue;
        
        // 인접한 노드(there)가 A 선거구인지 B 선거구인지 비트마스크로 판별
        bool there_isA = mask & (1 << (there - 1));
        
        // 현재 탐색 중인 선거구(isA)와 인접 노드의 선거구가 같을 때만 이어서 탐색
        if (isA == there_isA) {
            cnt += dfs(there, mask, isA); // 재귀 호출로 개수 누적
        }
    }
    return cnt;
}

int main() {
    // 입출력 속도 향상
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int num;
            cin >> num;
            v[i].push_back(num);
        }
    }
    
    // i=0(전부 B)과 i=(1<<n)-1(전부 A)인 경우는 공집합이 생기므로 제외
    for (int i = 1; i < (1 << n) - 1; i++) {
        fill(&visited[0], &visited[0] + 14, 0);
        int sumA = 0, sumB = 0;
        vector<int> A, B;
        
        // 1. A 선거구와 B 선거구 나누기 및 인구수 합산
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) { 
                A.push_back(j + 1);
                sumA += a[j + 1];
            } else {            
                B.push_back(j + 1);
                sumB += a[j + 1];
            }
        }
        
        // 2. DFS를 이용해 각 선거구가 연결되어 있는지 확인
        // i 비트마스크를 넘겨주고, A 그룹은 true, B 그룹은 false로 탐색 시작
        int countA = dfs(A[0], i, true);
        int countB = dfs(B[0], i, false);
        
        // 3. 유효성 검증: 탐색한 노드 수가 원래 그룹의 크기와 같으면 모두 연결된 것
        if (countA == A.size() && countB == B.size()) {
            ret = min(ret, abs(sumA - sumB));
        }
    }
    
    if (ret == INT_MAX) cout << -1 << '\n';
    else cout << ret << '\n';
    
    return 0;
}