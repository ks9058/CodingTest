#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
	vector<pair<int,int>>v;
	cin>>n;
	
	for(int i=0; i<n; i++){
		int w,h;
		cin>>w>>h;
		v.push_back({w,h});
	}
	
	for(int i=0; i<n; i++){
		int cnt=1;
		for(int j=0; j<n; j++){
			if(i==j) continue;	
			if(v[i].first<v[j].first&&v[i].second<v[j].second) cnt++;
			
		}
		cout<<cnt<<' ';
	}
	return 0;
}