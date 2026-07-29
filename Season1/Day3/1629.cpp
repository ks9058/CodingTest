#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a, b, c; // 2,147,483,647까지 담을 수 있음 
// 기본 전제
// 1. 재귀함수로 풀기
// 2. (a * b) % c = (a % c * b % c) % c 모듈러 분배법칙은 마지막에 %c가 붙는다.
ll go(ll a, ll b){
	if(b==1)return a%c;//기저 사례 

	// ret은 int의 연산한 결과가 와야하기 때문에 int의 최대값보다 더 큰 값이 가능해야함 그래서 long long
	ll ret = go(a, b/2);// 
	ret=(ret*ret)%c;// 
	if(b%2)ret=(ret*a)%c;//홀수 일 때(b%2) 한 번 더a^1인 걸 한 번 더 곱하기 위해서이다,  %c는 기본전제 2
	return ret;
}

int main (){
	cin >>a>>b>>c;
	cout<<go(a,b);
	return 0;
}  