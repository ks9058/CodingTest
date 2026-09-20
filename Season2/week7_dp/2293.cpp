#include <bits/stdc++.h>
using namespace std;


int n, k;
int dp[10004];

int main(){
	cin>>n>>k;
	
	
	dp[0]=1;
	for(int i=0; i<n; i++){
		int temp=0;
		cin>>temp;
		
		for(int j=temp; j<=k; j++){
			
			dp[j]+=dp[j-temp];
		}
	}
	
	
	cout<<dp[k];
	return 0;
}