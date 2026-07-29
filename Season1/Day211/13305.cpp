#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	vector<long long> edge (n-1);
	vector<long long> cost (n);
	for(int i=0; i<n-1; i++){
		cin>>edge[i];
	}
	
	for(int i=0; i<n; i++){
		cin>>cost[i];
	}
	
	long long min_cost=cost[0];
	long long ret=0;
	
	//현재 지나온 도시들 중 최저 주유가를 유지하면서 다음 구간 거리를 주행 
	for(int i=0; i<n-1; i++){
		if(min_cost>cost[i]){
			min_cost=cost[i];
		}
		ret=ret+(min_cost*edge[i]);
	}
	cout<<ret;
	
	return 0;
}