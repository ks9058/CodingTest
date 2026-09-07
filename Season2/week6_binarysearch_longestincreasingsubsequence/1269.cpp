#include <bits/stdc++.h>
using namespace std;

int n, m, ret;

vector<int> v1, v2;

bool check(int n, vector<int> &v){
	int l=0; 
	int r=v.size()-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(n==v[mid]) return true;
		
		if(n < v[mid]){
			r=mid-1;
		}else{
			l=mid+1;
		}
	}	
	return false;
}


int main(){
	cin>> n>> m;
	
	
	for(int i=0; i<n; i++){
		int num;
		cin>>num;
		
		v1.push_back(num);
	}
	sort(v1. begin(), v1.end());

	for(int i=0; i<m; i++){
		int num;
		cin>>num;
		
		v2.push_back(num);
	}
	sort(v2. begin(), v2.end());
		
	for(int k : v1){
		if(!check(k, v2)) ret++;
	}
	for(int k : v2){
		if(!check(k, v1)) ret++;
	}	
	
	cout<<ret;		
	return 0;
}