#include <bits/stdc++.h>
using namespace std;
int w,h,n,m;
int cnt;

int main(){
	cin>>h>>w>>n>>m;
	
	for(int i=0; i<h; i=i+n+1){
		for(int j=0; j<w; j=j+m+1){
			cnt++;
		}
	}
	cout<<cnt<<'\n';
	
}