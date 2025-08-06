#include <bits/stdc++.h>
using namespace std;
int T;

int main(){
	cin>>T;
	
	while(T--){
		int n=0;
		int cnt=0;
		cin>>n;
		
		while(n!=0&&n!=1){
			if(n%2==1) cout<<cnt<<' ';
			n=n/2;
			cnt++;
		}
		if(n%2==1) cout<<cnt<<' ';
		
	}	
	return 0;
}