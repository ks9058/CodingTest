#include <bits/stdc++.h>
using namespace std;


int n,k;
int dp[100004];

int main(){
	
	cin>>n>>k;
	
	for(int i=0; i<n; i++){
		int w, v;
		
		cin>>w>>v;
		
		for(int j=k; j>=w; j--){
			dp[j]=max(dp[j], dp[j-w]+v);
		}
	}
	
	cout<<dp[k];
	return 0;
}