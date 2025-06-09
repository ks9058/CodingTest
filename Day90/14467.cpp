#include <bits/stdc++.h>
using namespace std;

int n, arr[11], ret;

int main() {
	fill(&arr[0], &arr[11],-1);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int cow, side;
        cin >> cow >> side;

        if (arr[cow] == -1) {
            arr[cow] = side;
        } else if (arr[cow] != side) {
            ret++;
            arr[cow] = side;
        }
    }

    cout << ret;
    return 0;
}
