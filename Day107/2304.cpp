#include <bits/stdc++.h>
using namespace std;

int n;
long long ret;
int main(){
	cin>>n;
	
	vector<pair<int,int>> v(n);
	for(int i=0; i<n; i++){
		cin>>v[i].first>>v[i].second;
	}
	sort(v.begin(), v.end());
	
	int mx_h=0;
	int mx_idx=0;
	for(int i=0; i<n; i++){
		if(v[i].second>mx_h){
			mx_h=v[i].second;
			mx_idx=i;
		}
	}
	
	int cur_l=v[0].first;
	int cur_h=v[0].second;
	for(int i=1; i<=mx_idx; i++){
		if(v[i].second>=cur_h){
			ret+=(v[i].first-cur_l) * cur_h;
			cur_l=v[i].first;
			cur_h=v[i].second;
		}
	}
	
	cur_l=v[n-1].first;
	cur_h=v[n-1].second;
	for(int i=n-2; i>=mx_idx; i--){
		if(v[i].second>=cur_h){
			ret+=(cur_l-v[i].first) * cur_h;
			cur_l=v[i].first;
			cur_h=v[i].second;
		}
	}
	
	ret+= mx_h;
	cout<<ret;
	
	return 0;
}