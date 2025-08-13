#include <bits/stdc++.h>
using namespace std;
int n, num,ret;


bool isPrime(int num){
	if(num<=1) return false;
	
	for(int i=2; i*i<=num; i++){
		if(num%i==0) return false;
	}
	return true;
}

int main(){
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>num;
		if(isPrime(num)) ret++;
	}
	cout<<ret;
	return 0;
}