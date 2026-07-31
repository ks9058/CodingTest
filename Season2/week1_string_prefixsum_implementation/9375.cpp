#include <bits/stdc++.h>
using namespace std;

int T;


int main(){
	cin>>T;
	for(int i=0; i<T; i++){
		map<string, int> mp;
		int n;
		int ret=1;
		cin>>n;
		for(int j=0; j<n; j++){
			string first,second;
			cin>>first>>second;	
			mp[second]++;
		}
		for(auto a:mp){
			a.second++;
			ret=a.second*ret;
		}
		cout<<ret-1<<'\n';
	}
	return 0;
}