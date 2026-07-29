#include <bits/stdc++.h>
using namespace std;
int T;
int main(){
	cin>>T;
	while(T--){
		int n;
		vector<int> v;
		cin>>n;
		while(n > 1){
			if(n%2!=0) v.push_back(1);
			else v.push_back(0);
			n=n/2;
		}
		if(n==1) v.push_back(1);
		else v.push_back(0);
		
		for(int i=0; i<v.size(); i++){
			if(v[i]==1) cout<<i<<' ';
		}
	}
	return 0;
}