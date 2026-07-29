#include <bits/stdc++.h>
using namespace std;

int n,m;

int gcd(int a, int b){
	//유클리드 호재법 
	//큰 수에서 작은 수를 나눠서 나온 나머지로 계속 나누다가, 나머지가 0이 되면 그때 나눈 수가 최대공약수"
	while(b!=0){
	int r=a%b;
	a=b;
	b=r;	
	}
	return a;
}

int main(){
	cin>>n>>m;
	//최대공약수 구하기 
	int g=gcd(n,m);
	cout<<g;
	cout<<'\n';
	//최소 공배수는 (A*B) / 최대공약수 
	cout<<n*m/g;
	
	return 0; 
}