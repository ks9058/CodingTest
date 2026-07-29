#include <bits/stdc++.h>
using namespace std;
int n,m;
int main(){
	cin>>n>>m;
	vector<int> v(m);
	for(int i=0; i<m; i++){
		cin>>v[i];
	}
	
	int left=1,right=n, ret=n;
	while(left<=right){
		int mid=(left+right)/2;
		int last=0;
		bool ok=1;
		
		for(int i=0; i<m; i++){
			if(v[i]-mid > last){
				ok=0;
				break;
			}
			last=v[i] + mid;
		}	
		
		if(last<n) ok=0;
		
		if(ok){
			ret=mid;
			right=mid-1;
		}else{
			left=mid+1;
		}
	}
	
	cout<<ret;
	return 0;
}