#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> schedules(N);
    for (int i = 0; i < N; ++i) {
        cin >> schedules[i].first >> schedules[i].second;
    }

    // 일정 정렬
    sort(schedules.begin(), schedules.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first)
            return a.second > b.second;
        return a.first < b.first;
    });

    // 각 날짜에 일정 수 기록
    int calendar[366] = {0};
    for (const auto& schedule : schedules) {
        for (int day = schedule.first; day <= schedule.second; ++day) {
            calendar[day]++;
        }
    }

    // 코팅지 면적 계산
    int total_area = 0;
    int width = 0, 
	height = 0;
    for (int day = 1; day <= 365; ++day) {
        if (calendar[day] > 0) {
            width++;
            height = max(height, calendar[day]);
        } else if (width > 0) {
            total_area += width * height;
            width = 0;
            height = 0;
        }
    }
    // 마지막 구간 처리
    if (width > 0) {
        total_area += width * height;
    }

    cout << total_area << endl;
    return 0;
}
