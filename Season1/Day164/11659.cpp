#include <bits/stdc++.h>
using namespace std;

int n,m;
int main(){
	cin.tie(NULL); 
	cin>>n>>m;
	vector<long long> prefix(n+1, 0);
	for(int i=1; i<=n; i++){
		int num=0;
		cin>>num;
		prefix[i]=prefix[i-1]+num;
	}
	
	
	for(int i=0; i<m; i++){
		int first=0, second=0;
		cin>>first>>second;
		// 두번째 - 첫번째 -1 인덱스를 계산하면 구간합이 나옴 
		cout<<prefix[second]-prefix[first-1]<<'\n';
	}
	return 0;
}