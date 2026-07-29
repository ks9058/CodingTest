#include <bits/stdc++.h>
using namespace std;
int n, m;

int main(){
	cin>>n>>m;
	
	vector<int> v(n+1);
	for(int i=1; i<=n; i++){
		v[i]=i;
	}
	for(int i=0; i<m; i++){
		int s=0, e=0;
		cin>>s>>e;
		reverse(v.begin()+s, v.begin()+e+1);			
	}
	for(int i=1; i<=n; i++){
		cout<<v[i]<<' ';
	}

	return 0;
}