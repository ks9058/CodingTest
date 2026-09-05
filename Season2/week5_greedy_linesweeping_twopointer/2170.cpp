#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<int,int>>v;

int main(){
	cin>>n; 
	
	for(int i=0; i<n; i++){
		int a, b;
		cin>>a>>b;
		
		v.push_back({a, b});
	}	
	
	sort(v.begin(), v.end());
	
	
	int l=v[0].first;
	int r=v[0].second;
	int cnt=0;
	for(int i=1; i<n; i++){
	
		if(r>=v[i].first && r<v[i].second){
			r=v[i].second;
		}else if(r < v[i].first ){
			cnt+=abs(l-r);
			l=v[i].first;
			r=v[i].second;
		}
	}
	cnt+=abs(l-r);

	cout<<cnt;
	
	return 0;
}