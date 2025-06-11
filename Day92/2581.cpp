#include <bits/stdc++.h>
using namespace std;

int mn,sum;
bool isPrime(int n){
	if(n<=1) return 0;
	for(int i=2; i*i<=n; i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int first,second;
	cin>>first;
	cin>>second;
	
	for(int i=first; i<=second; i++){
		if(isPrime(i)){
			if(sum==0) mn=i;
			sum+=i;	
		}
	}
	if(sum)cout<<sum<<'\n'<<mn;
	else cout<<"-1";
	return 0;
}