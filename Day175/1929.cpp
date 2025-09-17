#include <bits/stdc++.h>
using namespace std; 
int num1, num2;

bool isPrime(int n){
	if(n<=1) return 0;
	
	for(int i=2; i*i<=n; i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	cin>>num1>>num2;
	
	for(int i=num1; i<=num2; i++){
		if(i==2||i==3)cout<<i<<'\n';

		if(i%2==0||i%3==0)continue;
		if(isPrime(i)) cout<<i<<'\n';
	}	
	return 0;
}