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
		int mid=(l+r)/2;
		int last=0;
		bool ok=1;
		
		for(int i=0; i<m; i++){
			if(v[i]-mid > last){
				ok=0;
				break;
			}
			last=v[i]+mid;
		}
		if(last<n) ok=0; //마지막 가로등이 끝에 닿았는지 확인 

		if(ok){
			ret=mid;
			r=mid-1; //이진 탐색을 위해서 mid -1 넣음, mid가 아닌 이유는 mid값을 이미 검사해서 답으로 넣었기 때문
		}else{
			l=mid+1;
		}
	}
	
	cout<<ret;
	
	return 0;
}