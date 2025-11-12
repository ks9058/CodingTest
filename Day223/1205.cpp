#include <bits/stdc++.h>
using namespace std;

int n, ns, p;

int main(){
	cin>>n>>ns>>p;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
	}	
	int rank=1;
	for(int i=0; i<n; i++){
		if(v[i]>ns) rank++;
	}
	if(n==p && v.back()>=ns) cout<<-1;
	else cout<<rank;
	return 0;
}