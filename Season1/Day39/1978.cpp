#include <bits/stdc++.h>
using namespace std;
/*prime 정의
도메인 integer이고, n, r, s 모두 interger 
n=r*s로나타내어지는데 r=n일때 s=1 and s=n일때 r=1  
*/
 

bool isPrime(int n) {
	//소수의 정의에 의해서 1은 소수가 아님  
    if (n < 2) return false;
    //루트 계산 없이 최적화된 계산을 위해서 i*i 
    for (int i = 2; i*i <= n; i++) {
    	// n%i이면 약수가 있는것이기 때문에 false 
        if (n % i == 0) return false;
    }
    //나머지는 소수 
    return true;
}

int main() {
    int n, num, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (isPrime(num)) cnt++;
    }
    cout << cnt;
    return 0;
}
