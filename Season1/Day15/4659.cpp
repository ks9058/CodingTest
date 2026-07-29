#include <bits/stdc++.h>
using namespace std;

// 모음인지 확인하는 함수
bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

// "좋은 암호"인지 판별하는 함수
bool isAcceptable(const string& word) {
    bool hasVowel = false;  // 모음 포함 여부
    int vowelCount = 0, consonantCount = 0;  // 연속된 모음/자음 개수
    char prevChar = '\0';  // 이전 문자 저장

    for (int i = 0; i < word.length(); i++) {
        char current = word[i];

        // 모음 여부 확인
        if (isVowel(current)) {
            hasVowel = true;
            vowelCount++;
            consonantCount = 0;
        } else {
            consonantCount++;
            vowelCount = 0;
        }

        // 연속된 모음 또는 자음이 3개 이상이면 실패
        if (vowelCount == 3 || consonantCount == 3) {
            return false;
        }

        // 연속된 같은 문자 검사 (단, 'ee'와 'oo'는 허용)
        if (i > 0 && current == prevChar && current != 'e' && current != 'o') {
            return false;
        }

        prevChar = current;
    }

    return hasVowel;  // 최소 한 개의 모음이 있어야 함
}

int main() {
    string word;

    while (true) {
        cin >> word;
        if (word == "end") break;

        if (isAcceptable(word)) {
            cout << "<" << word << "> is acceptable.\n";
        } else {
            cout << "<" << word << "> is not acceptable.\n";
        }
    }

    return 0;
}
