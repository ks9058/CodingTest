#include <bits/stdc++.h>
using namespace std;
int n,g;
int num[5];

int gcd(int a, int b){
	while(b!=0){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main(){
	cin>>n;
	
	for(int i=0; i<n; i++) cin>>num[i];
	
	int g=num[0];
	for(int i=1; i<n; i++){
		g=gcd(g, num[i]);	
	}

	for(int i=1; i<=g; i++){
		if(g%i==0) cout<<i<<'\n';
	}
	
	return 0;
}