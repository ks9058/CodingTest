#include <bits/stdc++.h>
using namespace std;
int n, num,ret;


int fib(int num){
	if(num==1||num==0) return num;
	
	return fib(num-2) + fib(num-1);
}

int main(){
	cin>>n;
	
	cout<<fib(n);
	return 0;
}