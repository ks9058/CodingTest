#include <bits/stdc++.h>
using namespace std;

long long gcd(int a, int b){
	
	while(b!=0){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}

long long num1, num2;
int main(){
	cin>>num1>>num2;
	long long g=gcd(num1, num2);
	cout<<g<<'\n';
	long long ret=num1*num2;
	cout<<ret/g<<'\n';
	return 0;
}