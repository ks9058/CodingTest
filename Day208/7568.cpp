#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	vector<pair<int, int>> v;
	for(int i=0; i<n; i++){
		int w,h;
		
		cin>>w>>h;
		v.push_back({w,h});
	}
	
	for(int i=0; i<n; i++){
		int rank=1;
		for(int j=0; j<n; j++){
			if(i==j) continue;
			
			if(v[i].first<v[j].first&&v[i].second<v[j].second) rank++;
		}
		cout<<rank<<' ';
	}
	return 0;
}