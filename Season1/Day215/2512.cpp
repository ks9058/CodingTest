#include <bits/stdc++.h>
using namespace std;
int n, mx, total;
int main(){
	cin>>n;
	vector<int> v(n);
	
	for(int i=0; i<n; i++){
		cin>>v[i];
		mx=max(mx, v[i]);
	}
	cin>>total;
	
    //이분탐색
    int left=0, right=mx, ret=0;
    
	while(left<=right){
		int mid=(left+right)/2;
		long long sum=0;
		
		for(int a:v){
			sum+=min(a, mid);
		}
		
		if(sum<=total){
			ret=mid;
			left++;
		}else{
			right--;
		}
	}
	cout<<ret;
	return 0;
}