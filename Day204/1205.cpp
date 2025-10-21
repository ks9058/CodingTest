#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, P;
    long long newScore;
    cin >> N >> newScore >> P;

    vector<long long> scores;
    if (N > 0) {
        scores.resize(N);
        for (int i = 0; i < N; i++) {
            cin >> scores[i];
        }
    }

    if (N == P) {
        if (!scores.empty() && scores.back() >= newScore) {
            cout << -1 << "\n";
            return 0;
        }
    }

    int rank = 1;
    for (int i = 0; i < N; i++) {
        if (scores[i] > newScore) {
            rank++;
        } else {
            break;
        }
    }

    cout << rank << "\n";

    return 0;
}
