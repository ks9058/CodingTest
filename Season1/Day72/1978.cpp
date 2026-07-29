#include <bits/stdc++.h>
using namespace std;

int  n;
int ret;

//n = a × b 이고,
//a ≤ √n 또는 b ≤ √n 중 하나는 반드시 성립
bool isPrime(int n){
	if(n==1) return 0;
	for(int i=2; i*i<=n; i++){ //제곱근까지 검사 
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		int k;
		cin>>k;
		if(isPrime(k)) ret++;
	}
	cout<<ret;
	return 0;
}