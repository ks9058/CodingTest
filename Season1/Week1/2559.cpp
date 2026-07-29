#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k, max=-100000004, temp; //중요 : 최대값을 구하라라고 하면 최솟값을 지정하고 최대값을 갱신하며  저장->  여기서 최솟값은 최악을 생각 -100(도)*100,000(번K의 수) 
	int psum[100001];
	cin>>n>>k;
	for(int i=1; i<=n; i++){
		cin>>temp;
		psum[i]=psum[i-1]+temp; //프썸 공식 외우기  
	}
	for(int i=k; i<=n; i++){//i=k해서 프썸 이용 
		temp=0;
		temp=psum[i]-psum[i-k];
		if(max<temp) max=temp;  
	}
	cout<<max;
	return 0;
}