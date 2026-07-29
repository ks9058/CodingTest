#include <bits/stdc++.h>
using namespace std;
int t;
//팩토리얼 끝에 0이 생기는 이유는 2*5때문에 생김 이를 통해 2와 5가 몇번들어갔는지를 알면 답을 구할수 있음
//하지만 2를 나누는 수는 많지만 5르르 나누는 수가 적기 때문에 5를 세는것 
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> t;
    while (t--) {
        int n;
        cin  >> n;
        int cnt5 = 0;
		//n이 5보다 작으면 더이상 나눌 값이 없기 때문에 끝냄 
        while (n >= 5) {
        	//100/5 =20, 100에 5가 20번 들어있다. 
            cnt5 += n / 5;
            
            //하지만 25와 같이 5가 여러번 곱해진 경우를 세기 위해서 
            n /= 5;
        }
        cout << cnt5 << '\n';
    }
    return 0;
}
