#include <bits/stdc++.h>
using namespace std;
int n;
vector<pair<int, int>> v;
int main(){
	cin>>n;
	
	for(int i=0; i<n; i++){
		int h, w;
		cin>>w>>h;
		v.push_back({w, h});
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