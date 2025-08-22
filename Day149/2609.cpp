#include <bits/stdc++.h>
using namespace std;
int num1, num2, ret;

int gcd(int a, int b){
	
	while(b!=0){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main(){
	cin>>num1>>num2;
	ret=gcd(num1, num2);
	cout<<ret<<'\n';
	cout<<(num1/ret)*(num2/ret)*ret;
	
	return 0;
	
}