#include <bits/stdc++.h>
using namespace std;
int t;

long long gcd(long long a, long long b){
	while(b!=0){
		long long r= a%b;
		a=b;
		b=r;
	}
	return a;
}

int main(){
	cin>>t;
	
	while(t--){
		long long total=0;
		int n=0;
		cin>>n;
		vector<long long> v;
		for(int i=0; i<n; i++){
			long long num;
			cin>>num;
			v.push_back(num);
		}
		for(int i=0; i<v.size()-1; i++){
			for(int j=i+1; j<v.size(); j++){
				total=total+gcd(v[i],v[j]);
			}
		}
		cout<<total<<'\n';
	}
	return 0;
}