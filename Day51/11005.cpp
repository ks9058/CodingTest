#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, B;
    cin >> N >> B;

    string result = "";

    while (N > 0) {
        int remainder = N % B;

        // 0~9는 그대로 숫자, 10~35는 A~Z
        if (remainder < 10)
            result = char(remainder + '0') + result; //앞 문자에 계속해서 추가 
        else
            result = char(remainder - 10 + 'A') + result; 

        N /= B;
    }

    cout << result << '\n';

    return 0;
}
