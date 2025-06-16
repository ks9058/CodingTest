#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<double> arr;

    double temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());
    cout << fixed << setprecision(3);
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << '\n';
    }

    return 0;
}
