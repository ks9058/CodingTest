#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	while(b!=0){
		int r= a%b;
		a=b;
		b=r;
	}
	return a;
}

int main(){
	int n,m;
	int ret;
	
	cin>>n>>m;
	ret=gcd(n,m);
	
	cout<<ret<<'\n';
	cout<<n*m/ret<<'\n';
	return 0;
}