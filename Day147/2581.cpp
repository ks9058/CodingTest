#include <bits/stdc++.h>
using namespace std;

int n1, n2, min_ret, sum_ret;

bool isPrime(int num){
	if(num<=1) return false;
	for(int i=2; i*i<=num; i++){
		if(num%i==0) return false;
	}
	return true;
}

int main(){
	cin>>n1>>n2;
	
	for(int i=n1; i<=n2; i++){
		if(isPrime(i)){
			if(sum_ret==0) min_ret=i;
			sum_ret+=i;
		}
	}
	if(sum_ret==0) cout<<-1;
	else cout<<sum_ret<<'\n'<<min_ret;
	return 0;
}