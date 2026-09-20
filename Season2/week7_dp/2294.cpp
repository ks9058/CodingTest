#include <bits/stdc++.h>
using namespace std;

int n, k, temp, INF=987654321;
int dp[10004];

int main(){
	cin>>n>>k;
	
	fill(&dp[0], &dp[0]+10004, INF);
	dp[0]=0;
	
	for(int i=0; i<n; i++){
		cin>>temp;
		
		for(int j=temp; j<=k; j++){
			dp[j]=min(dp[j], dp[j - temp] +1);
		}
	}
	
	if(dp[k]==INF) cout<<-1;
	else cout<<dp[k];
	return 0;
}