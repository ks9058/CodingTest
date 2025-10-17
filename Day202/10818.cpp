#include <bits/stdc++.h>
using namespace std;
int n;
long long mn=LONG_LONG_MAX , mx=LONG_LONG_MIN;
int main(){
	cin>>n;
	
	for(int i=0; i<n; i++){
		long long num;
		cin>>num;
		mn=min(num, mn);
		mx=max(num, mx);
	}
	
	cout<<mn<<' '<<mx;
	return 0;
}