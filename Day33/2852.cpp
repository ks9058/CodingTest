#include <bits/stdc++.h>
using namespace std;

// 초 단위 변환 함수
int timeToSeconds(string time) {
    int minutes = stoi(time.substr(0, 2));
    int seconds = stoi(time.substr(3, 2));
    return minutes * 60 + seconds;
}

// 초를 MM:SS 형식으로 변환하는 함수
string secondsToTime(int totalSeconds) {
    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;
    return (minutes < 10 ? "0" : "") + to_string(minutes) + ":" + (seconds < 10 ? "0" : "") + to_string(seconds);
}

int main() {
    int N;
    cin >> N;

    int score1 = 0, score2 = 0; // 팀 1과 팀 2의 점수
    int leadTime1 = 0, leadTime2 = 0; // 각 팀이 리드한 총 시간
    int lastTime = 0; // 마지막 스코어 변경 시간
    int leadingTeam = 0; // 현재 리드 중인 팀 (1 또는 2, 0은 동점)

    for (int i = 0; i < N; i++) {
        int team;
        string time;
        cin >> team >> time;

        int currentTime = timeToSeconds(time);

        // 현재까지 리드했던 팀의 시간 업데이트
        if (leadingTeam == 1) {
            leadTime1 += (currentTime - lastTime);
        } else if (leadingTeam == 2) {
            leadTime2 += (currentTime - lastTime);
        }

        // 득점 반영
        if (team == 1) {
            score1++;
        } else {
            score2++;
        }

        // 리드 팀 변경
        if (score1 > score2) {
            leadingTeam = 1;
        } else if (score2 > score1) {
            leadingTeam = 2;
        } else {
            leadingTeam = 0; // 동점 상태
        }

        lastTime = currentTime;
    }

    // 경기 종료 시각 (48분 = 2880초)까지의 마지막 리드 시간 추가
    if (leadingTeam == 1) {
        leadTime1 += (2880 - lastTime);
    } else if (leadingTeam == 2) {
        leadTime2 += (2880 - lastTime);
    }

    // 결과 출력
    cout << secondsToTime(leadTime1) << "\n";
    cout << secondsToTime(leadTime2) << "\n";

    return 0;
}
