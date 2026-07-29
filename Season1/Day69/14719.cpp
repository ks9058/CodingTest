#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<int> blocks(W);
    for (int i = 0; i < W; ++i) {
        cin >> blocks[i];
    }

    int totalWater = 0;
    //물이 고일 수 있는 위치만 확인 -> 1 ~ W-1 까지 확인 
    for (int i = 1; i < W - 1; ++i) {
    	//이터레이터 반환을 역참조 
        int leftMax = *max_element(blocks.begin(), blocks.begin() + i);
        int rightMax = *max_element(blocks.begin() + i + 1, blocks.end());

        //왼쪽 가장 높은 높이와 오른쪽 가장 높은 높이중 작은 값을 가지고 빼기
        int waterHeight = min(leftMax, rightMax) - blocks[i];
        if (waterHeight > 0) totalWater += waterHeight;
    }

    cout << totalWater << '\n';
    return 0;
}
 