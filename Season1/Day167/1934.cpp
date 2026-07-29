#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	
	while(b!=0){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int T;
int main(){
	cin>>T;
	
	while(T--){
		int first, second;
		cin>>first>>second;
		long long ret=first*second;
		cout<<ret/gcd(first, second)<<'\n';
	}
	return 0;
}