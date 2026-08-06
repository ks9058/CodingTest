#include <bits/stdc++.h>
using namespace std;
int T;
int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>T;
	while(T--){
		int n=0;
		int cnt=0;
		cin>>n;
		
		for(int i = 5; i<=n; i*=5){
			cnt+= n/i;
		}	
		cout<<cnt<<'\n';
	}
	return 0;
}