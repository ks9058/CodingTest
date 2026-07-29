#include <bits/stdc++.h>
using namespace std;

long long a,b,c;

long long go(long long a, long long b){
	if(b==1) return a%c; //중간에 나눠도 상관 없음 
	
	long long ret=go(a,b/2); //코스트 연산을 줄이기 위해 반으로 나눈 걸 변수에 담아서 계산 
	ret=(ret*ret)%c; //중간에 나눠도 상관 없음
	
	if(b%2)ret=(ret*a)%c; //홀수 일때 ret에다가 a^1승을 곱하는 것 
	return ret;
}


int main(){
cin.tie(NULL);
cout.tie(NULL);
cin>> a>>b>>c;
cout<<go(a,b);;
return 0;	
}