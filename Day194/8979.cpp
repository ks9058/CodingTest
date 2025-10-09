#include <bits/stdc++.h>
using namespace std;

struct Country {
    int id, gold, silver, bronze;
};

int arr[1004];

int main() {
    int n, k;
    cin >> n >> k;
    vector<Country> v(n);
	
    for (int i = 0; i < n; i++)
        cin >> v[i].id >> v[i].gold >> v[i].silver >> v[i].bronze;
    
    for (int i = 0; i < n; i++) {
        int rank = 1;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            
            if (v[i].gold < v[j].gold) rank++;
            else if (v[i].gold == v[j].gold) {
                if (v[i].silver < v[j].silver) rank++;
                else if (v[i].silver == v[j].silver) {
                    if (v[i].bronze < v[j].bronze) rank++;
                }
            }
        }
        arr[v[i].id] = rank;
    }
    
    cout << arr[k];
    return 0;
}
