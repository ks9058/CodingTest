#include <bits/stdc++.h>
using namespace std;

int n;

int fib(int a){
	if(a==1||a==0) return a;
	
	return fib(a-1)+fib(a-2);
}

int main(){
	cin>>n;
	
	cout<<fib(n);
	return 0;
}