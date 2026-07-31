#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
ll a, b, c;

// a가 밑, b가 지수
ll go(ll a, ll b){
    if(b == 1) return a % c;
    
	// 2로 나누는 이유는 분할 정복을 위함 a^b를 구하기 위해 a^2/b를 구하는 것-> 예를 들어 a^8은 (a^4)^2 와 같으므로 a^4만 알면 a^8값을 알 수 있음  
	ll ret = go(a, b / 2);
    
	// 정수론의 핵심: 곱하기를 다 하고 마지막에 나머지를 구하나, 곱하는 도중에 중간중간 나머지를 구하나 결과가 같다
	// 예) 7^2 mod 5 
	// 방법 A (다 곱하고 나누기): 7 * 7 = 49 -> 49 mod 5 = 4
	// 방법 B (처음부터 나누고 시작하기): 7 mod 5 = 2 이므로, 2 * 2 = 4 -> 4 mod 5 = 4
	// (X * Y) mod c = ((X mod c) * (Y mod c)) (mod c) 
    ret = (ret * ret) % c;
	
	//b가 홀수 일 때 한 번 더 곱해줘야 함 
	// 예) 2^5 
	// 2^4*2^1
	// 2^2*2^2*2^1
	// 예시에서의 2^1을 곱하는것 
	if(b % 2)ret = (ret * a)% c;
	
    return ret;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b >> c;
    cout << go(a, b) << "\n";
    return 0;
}