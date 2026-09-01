#include<bits/stdc++.h>
using namespace std;


int n, ret;
vector<pair<int, int>>v;

int main(){
	cin>>n;
	
	
	for(int i=0; i<n; i++){
		int from, to;
		cin>>from>>to;		
		v.push_back({to, from});
	}
	
	sort(v.begin(), v.end());
	
	int to=v[0].first;
	int from=v[0].second;
	
	for(int i=1; i<n; i++){
		if(v[i].second < to )continue;
		from = v[i].second; 
		to=v[i].first;
		ret++;	
	}
	
	cout<<ret+1;
	return 0;
}