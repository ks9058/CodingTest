#include <bits/stdc++.h>
using namespace std;
int n, ret;


long long gcd(long long a, long long b){
	while(b!=0){
		long long r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main(){
	cin>>n;
	vector<long long> v;
	
	for(int i=0; i<n; i++){
		int num;
		cin>>num; 
		v.push_back(num);
	}
	
	vector <long long> btw;
	for(int i=0; i<n-1; i++){
		long long num=v[i+1]-v[i];
		btw.push_back(num);
	}
	
	long long g=btw[0];
	
	for(int i=1; i<btw.size(); i++){
		g=gcd(g, btw[i]);	
	}
	
    //거리차/최대공약수 -1을 더하면 결과값 
	for(int i=0; i<btw.size(); i++){
		ret+=(btw[i]/g)-1;
	}
	cout<<ret;
	return 0;
}