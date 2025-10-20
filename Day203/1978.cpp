#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num){
	if(num<=1) return 0;
	for(int i=2; i*i<=num; i++){
		if(num%i==0) return 0;
	}
	return 1;
}

int main(){
	int n=0;
	int cnt=0;
	cin>>n;
	
	for(int i=0; i<n; i++){
		int num=0;
		cin>>num;
		if(isPrime(num)) cnt++;
	}
	
	cout<<cnt;
	return 0;
}