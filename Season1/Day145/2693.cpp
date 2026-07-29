#include <bits/stdc++.h>
using namespace std;
int T;
int main(){
	cin>>T;
	
	while(T--){
		vector<int> v;
		for(int i=0; i<10; i++){
			int n=0;
			cin>>n;
			v.push_back(n);
		}
		sort(v.begin(), v.end(), greater<int>());
		cout<<v[2]<<'\n';
	}
	return 0;
}