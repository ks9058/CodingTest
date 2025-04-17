#include <bits/stdc++.h>
using namespace std;
// 해당 문제는 소수를 구하는 알고리즘이 들어가면 시간초과가 난다. 따라서 가장 작은 소수인 2부터 시작해서 소인수분해를 하게된다. 
int main() {
    int n;
    cin >> n;
	//4,6,8과 같은 합성수들은 2와 3으로 나눠질 수 있으니 고려하지 않아도 된다.  
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            cout << i << '\n';
            n /= i;
        }
    }
    //n이 소수일때
    if (n > 1) {
        cout << n << '\n';
    }

    return 0;
}
