#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool isPalindrome(int n) {
    string s = to_string(n);
    string r = s;
    reverse(r.begin(), r.end());
    return s == r;
}

int main() {
    int num;
    cin >> num;
    while (true) {
    	//대부분의 수는 소수가 아니기 때문에 팰린드롬을 먼저 계산하는 것이 효율성 측면에서 더 좋음 
        if (isPalindrome(num) && isPrime(num)) {
            cout << num << '\n';
            break;
        }
        num++;
    }
}
