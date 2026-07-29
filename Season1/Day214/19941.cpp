#include <bits/stdc++.h>
using namespace std;
int n, k, ret;
int main(){
	cin>>n>>k;
	vector<char> v(n);
	vector<int> check(n);
	fill(&check[0], &check[n], 0);
	
	for(int i=0; i<n; i++) cin>>v[i];
	
	
	for(int i=0; i<n; i++){
		if(v[i]=='H') continue; //햄버거면 건너뛰기 
		int l=i-k;
		int r=i+k;
		
		for(int j=l; j<=r; j++){
			if(j<0) continue;
			if(v[j]=='H'&&check[j]==0){
				 ret++;
				 check[j]=1;
				 break; 
			}
		}
	}

	cout<<ret;
	return 0;
}