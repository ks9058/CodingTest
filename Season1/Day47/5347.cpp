#include <bits/stdc++.h>
using namespace std;
int n;

long long gcd(long long a, long long b){
	
	while(b!=0){
		int r= a % b;
		a=b;
		b=r;
	}
	return a;
}

int main(){
	cin>>n;
	
	while(n--){
        //a, b는  백만보다 작거나 같음 1000000
		long long a,b;
		cin>>a>>b;
		// a * b가 최악의 경우 1000000 * 1000000이 되기 때문에 이는 int로 감당할 수 없음
		cout<<a*b/gcd(a,b)<<'\n';
	}
	return 0;
}