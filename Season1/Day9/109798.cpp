#include <bits/stdc++.h>
using namespace std;

int main() {
    string words[5]; // 5개의 단어 저장
    int maxLength = 0;       // 가장 긴 단어의 길이 저장

    // 입력 받기
    for (int i = 0; i < 5; i++) {
        cin >> words[i];
        maxLength = max(maxLength, (int)words[i].length()); // 가장 긴 단어 길이 갱신
        													//(int)를 사용하여 size_t → int로 변환하여 타입을 맞춘다. 
    }

    // 세로로 읽기
    for (int i = 0; i < maxLength; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < words[j].length()) { // 단어의 범위를 넘지 않는 경우만 출력
                cout << words[j][i];
            }
        }
    }
    return 0;
}
