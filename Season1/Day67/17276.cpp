#include <bits/stdc++.h>
using namespace std;

int t;
int main(){
	cin >> t;

	while (t--) {
		int n;
		int angle;
		int arr[504][504];
		int temp[504][504];
		cin >> n >> angle;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> arr[i][j];
				temp[i][j] = arr[i][j];
			}
		}

		int current_angle = 0;

		// 양수일 때
		while (angle >= 0 && angle != current_angle) {

			for (int i = 0; i < n / 2; i++) temp[i][n / 2] = arr[i][i]; // hl → hm
			for (int i = 0; i < n / 2; i++) temp[i][n - i - 1] = arr[i][n / 2]; // hm → hr
			for (int i = 0; i < n / 2; i++) temp[n / 2][n - i - 1] = arr[i][n - i - 1]; // hr → mr
			for (int i = 0; i < n / 2; i++) temp[n - i - 1][n - i - 1] = arr[n / 2][n - i - 1]; // mr → lr
			for (int i = 0; i < n / 2; i++) temp[n - i - 1][n / 2] = arr[n - i - 1][n - i - 1]; // lr → lm
			for (int i = 0; i < n / 2; i++) temp[n - i - 1][i] = arr[n - i - 1][n / 2]; // lm → ll
			for (int i = 0; i < n / 2; i++) temp[n / 2][i] = arr[n - i - 1][i]; // ll → ml
			for (int i = 0; i < n / 2; i++) temp[i][i] = arr[n / 2][i]; // ml → hl

			current_angle += 45;

			for (int i = 0; i < n; i++)
				for (int j = 0; j < n; j++)
					arr[i][j] = temp[i][j];
		}

		// 음수일 때
		while (angle <= 0 && angle != current_angle) {

			for (int i = 0; i < n / 2; i++) temp[i][i] = arr[i][n / 2]; // hm → hl
			for (int i = 0; i < n / 2; i++) temp[i][n / 2] = arr[i][n - i - 1]; // hr → hm
			for (int i = 0; i < n / 2; i++) temp[i][n - i - 1] = arr[n / 2][n - i - 1]; // mr → hr
			for (int i = 0; i < n / 2; i++) temp[n / 2][n - i - 1] = arr[n - i - 1][n - i - 1]; // lr → mr
			for (int i = 0; i < n / 2; i++) temp[n - i - 1][n - i - 1] = arr[n - i - 1][n / 2]; // lm → lr
			for (int i = 0; i < n / 2; i++) temp[n - i - 1][n / 2] = arr[n - i - 1][i]; // ll → lm
			for (int i = 0; i < n / 2; i++) temp[n - i - 1][i] = arr[n / 2][i]; // ml → ll
			for (int i = 0; i < n / 2; i++) temp[n / 2][i] = arr[i][i]; // hl → ml

			current_angle -= 45;

			for (int i = 0; i < n; i++)
				for (int j = 0; j < n; j++)
					arr[i][j] = temp[i][j];
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << arr[i][j] << ' ';
			}
			cout << "\n";
		}
	}
	return 0;
}
