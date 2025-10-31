#include <bits/stdc++.h>
using namespace std;

int n, x;
int main(){
	cin>>n>>x;
	vector<int> v(n);
	
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	int cnt=0, mx=0, window=0;
	for(int i=0; i<x; i++){
		window+=v[i];
	}
	cnt=1;
	mx=window;	
	for(int i=x; i<n; i++){
		window+=v[i];
		window-=v[i-x];
		if(mx<window){
			mx=window;
			cnt=1;
		}else if(mx==window){
			cnt++;
		}
	}
	if(mx<=0) cout<<"SAD";
	else{
		cout<<mx<<'\n'<<cnt;
	}
	return 0;
}