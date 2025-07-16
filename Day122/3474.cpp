#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int cnt = 0;
		while(n>=5){
			cnt+=n/5; //5의 배수 세기 위함
			n/=5; //5^k를 세기 위함
		}

        cout << cnt << '\n';
    }

    return 0;
}
