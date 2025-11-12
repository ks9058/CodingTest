#include <bits/stdc++.h>
using namespace std;
int n,m;
int main(){
	cin>>n>>m;
	vector<int> v(m);
	for(int i=0; i<m; i++){
		cin>>v[i];
	}
	
	int l=1, r=n, ret=n;
	while(l<=r){
		int mid=(l+r)/2; // 이분탐색으로 mid로 값을 찾아나감 
		int last=0;
		bool ok=1;
		
		for(int i=0; i<m; i++){
			if(last < v[i]-mid){ //현재 가로등의 조명과 이전 조명이 비춘 구간 사이에 빈 구간이 있는지  
				ok=0;
				break;
			}
			last=v[i]+mid;
		}
		
		if(last<n) ok=0; //마지막 가로등이 끝에 닿았는지 확인 
		
		if(ok){
			ret=mid;
			r=mid-1;
		}else{
			l=mid+1;
		}
	}
	
	cout<<ret;
	
	return 0;
}