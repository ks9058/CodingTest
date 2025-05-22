#include <bits/stdc++.h>
using namespace std;
bool arr[1004]; 
int cnt=0;
int ret;

int main(){
	int n,k;
	cin>>n>>k;
	
	for(int i=2; i<=n; i++){
		if(arr[i]==1) continue;
		for(int j=i; j<=n; j=j+i){
			if(arr[j]==1) continue;
			arr[j]=1;
			cnt++;
			if(cnt==k){
				cout<<j;
				return 0;
			} 
		}
	}
	return 0;
}