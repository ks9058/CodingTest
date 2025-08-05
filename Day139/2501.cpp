#include <bits/stdc++.h>
using namespace std;
int num, n;
int main(){
	cin>>num>>n;
	vector<int> v;
	
	//약수 구할때 sqrt(num)만큼 반복문을 돌려야 최적화 가능  
	for(int i=1; i*i<=num; i++){
		if(num%i==0){
		v.push_back(i);
		//중복 제외 
		if(num/i!=i) v.push_back(num/i);
		}
	}
	sort(v.begin(), v.end());
	
	if (v.size()<n) cout<<0;
    else cout<<v[n-1];

	return 0; 
}