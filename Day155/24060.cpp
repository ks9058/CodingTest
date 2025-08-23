#include <bits/stdc++.h>
using namespace std;

int n, k, cnt, ret = -1;
int A[500000];
int tmp[500000];

void merge(int A[], int p, int q, int r) {
    int i = p;
    int j = q + 1;
    int t = p;

    while (i <= q && j <= r) {
        if (A[i] <= A[j]) tmp[t++] = A[i++];
        else tmp[t++] = A[j++];
    }
    while (i <= q) tmp[t++] = A[i++];
    while (j <= r) tmp[t++] = A[j++];

    // p~r 구간 만큼 저장 그 횟수 카운트
    for (int l = p; l <= r; l++) {
        A[l] = tmp[l];
        cnt++;
        if (cnt == k) ret = A[l];
    }
}

void merge_sort(int A[], int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
    }
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> A[i];

    merge_sort(A, 0, n - 1);

    cout << ret << '\n';  
    return 0;
}
