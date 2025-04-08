//배열 변경할 때 인덱스가 어떻게 변경되는지 표 그려서 수식 세우기 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, d;
        cin >> n >> d;
        vector<vector<int>> mat(n, vector<int>(n));
        vector<vector<int>> temp(n, vector<int>(n));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> mat[i][j];
		int cnt=abs(d/45);
		//양수일때 
        if (d > 0){
        	for(int t=0; t<cnt; t++){
        	   temp = mat;
				for (int i = 0; i < n; i++) {
		            temp[i][n/2] = mat[i][i];          	// 주대각선 -> 중앙열
		            temp[i][n-1-i] = mat[i][n/2];         // 중앙열 -> 부대각선
		            temp[n/2][n-1-i] = mat[i][n-1-i];        // 부대각선 -> 중앙행
		            temp[i][i] = mat[n/2][i];       	// 중앙행 -> 주대각선
       			}
       			 mat = temp; //결과 저장-> 다음 회전시 유효할수 있도록 
			}
		}
		//음수일때 
        else{
        	for(int t=0; t<cnt; t++){
        	   temp = mat;
				for(int i = 0; i < n; i++) {
		            temp[i][i] = mat[i][n/2];          	// 주대각선 <- 중앙열
		            temp[i][n/2] = mat[i][n-1-i];         // 중앙열 <- 부대각선
		            temp[i][n-1-i] = mat[n/2][n-1-i]; 	 // 부대각선 <- 중앙행
		            temp[n/2][i] = mat[i][i];       	// 중앙행 <- 주대각선
       			}
       			 mat = temp; 
			}
		}

        for(int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j)
        cout << mat[i][j] << ' ';
    cout << '\n';
}

    }

    return 0;
}
