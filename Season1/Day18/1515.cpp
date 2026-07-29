#include <bits/stdc++.h>
using namespace std;

int main() {    
    string N;
    cin >> N;  // 입력 받기

    int num = 1;  // 1부터 시작
    int index = 0;  // N의 몇 번째 문자를 찾고 있는지

    while (index < N.size()) {  // N을 모두 찾을 때까지 반복
        string numStr = to_string(num);  // 현재 숫자를 문자열로 변환

        for (char digit : numStr) {  // 현재 숫자의 각 자리수 확인
            if (digit == N[index]) {  // 원하는 숫자와 일치하면
                index++;  // 다음 자리 찾기
                if (index == N.size()) {  // 끝까지 찾았으면 종료
                    cout << num;  // 결과 출력
                    return 0;  // 정상 종료
                }
            }
        }

        num++;  // 다음 숫자로 증가
    }

    return 0;
}
