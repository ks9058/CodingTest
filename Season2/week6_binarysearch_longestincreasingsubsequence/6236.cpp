#include <bits/stdc++.h>
using namespace std;

int n, m, mx, ret;
int a[100004];

bool check(int k){
	int sum = 0;
	int cnt =1;
	
	for(int i=0; i<n; i++){
		if(a[i] > k) return false;
		
		if(sum+a[i] > k){
			cnt++;
			sum=a[i];
		}else {
			sum+=a[i];
		}
	}
	
	return cnt<=m;
	
}


int main(){
	cin>> n>> m;
	
	
	for(int i=0; i<n; i++){
		cin>>a[i];
		mx+=a[i];
	}
	
	int l=0;
	int r=mx;
	
	while(l<=r){
		int mid= (l+r) /2;
		
		if(check(mid)){
			ret=mid;
			r = mid -1;
		}
		else{
			l=mid+1;
		}
	}
	
	
	cout<<ret;
	return 0;
}