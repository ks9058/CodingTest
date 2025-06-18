#include <bits/stdc++.h>
using namespace std;

map<int ,int> mp;
vector<int> v;
int n, m;

bool cmp(int a, int b){
	return mp[a]>mp[b]; //if 문 쓰지말고 로직으로 간결하게 리턴하기  
}

int main(){
	cin>>n>>m;
	
	for(int i=0; i<n; i++){
		cin>>m;
		mp[m]++;
		if(mp[m]==1) v.push_back(m);
	}
	
	stable_sort(v.begin(), v.end(),cmp);
	
	for(int a: v){
		int k=mp[a];
		for(int i=0; i<k; i++) cout<<a<<' ';
	}
	return 0;
}