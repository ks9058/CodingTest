#include <bits/stdc++.h>
using namespace std;

int n;
int arr[11];

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int taller_person;
        cin >> taller_person;

        int empty = 0;
        
        for (int j = 1; j <= n; j++) {
            if (arr[j] == 0) {
                if (empty == taller_person) {
                    arr[j] = i;
                    break;
                }
                empty++;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}
