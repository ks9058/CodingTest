#include <bits/stdc++.h>
using namespace std;

int psum[100004];
int n, k,num, mx=INT_MIN;

int main(){
	cin>>n>>k;
	
	for(int i=1; i<=n; i++){
		cin>>num;
		psum[i]=psum[i-1]+num;
	}
	for(int i=k; i<=n; i++){
		mx=max(mx,psum[i]-psum[i-k]);	
	}	
	cout<<mx;
	return 0;
} 