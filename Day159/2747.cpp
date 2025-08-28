#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	long long a=0, b=1, ret=0;
	if(n==0) cout<<a;
	else if(n==1) cout<<b;
	else{
		for(int i=2; i<=n; i++){
			ret=a+b;
			a=b;
			b=ret;
		}
		cout<<ret;
	}
	return 0;
}