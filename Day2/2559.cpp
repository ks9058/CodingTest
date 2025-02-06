#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,K;
	int a;
	int ret= -1000004; //최솟값부터 넣고 증가시키면서 최대값을 찾아야함 이값은 문제에서 온도의 최저값 -100과N의 최대수 10만을 곱한  -10000000에 버퍼같은 느낌으로 4를추가 
	int psum[100001]; //
	fill(&psum[0],&psum[100000],0);
	cin>>N>>K;
	
	for(int i=1; i<=N; i++){//프썸을 1부터 시작 
		cin>>a;
		psum[i]=psum[i-1]+a;//psum 기억 
	}
	for(int i=K; i<=N; i++){
		ret=max(ret, psum[i]-psum[i-K]); //max(ret, value)사용법 익히기 
	}
	
	cout<<ret;
	return 0;
}