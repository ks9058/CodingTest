#include <bits/stdc++.h>
using namespace std;
int n;
bool check[31];
int main(){
	
	for(int i=1; i<=28; i++){
		cin>>n;
		check[n]=1;		
	}

	for(int i=1; i<=30; i++){
		if(check[i]==0) cout<<i<<'\n';
	}
	return 0;
}