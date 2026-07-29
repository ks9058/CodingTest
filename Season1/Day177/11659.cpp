#include <bits/stdc++.h>
using namespace std;
int n, t;
int prefix[100004];
int main(){
	cin.tie(NULL);
	cin>>n>>t;
	for(int i=1; i<=n; i++){
		int num=0;
		cin>>num;
		prefix[i]=num+prefix[i-1];
	}
	
	for(int i=0; i<t; i++){
		int num1, num2;
		cin>>num1>>num2;
		cout<<prefix[num2]-prefix[num1-1]<<'\n';
	}
	return 0;
}