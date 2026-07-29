#include <bits/stdc++.h>
using namespace std;
int n;
int cnt;

int main(){
	cin>>n; 
	
	int cmp=1;
	for(int i=1; cmp<n; i++){
		cmp+=i*6;
		cnt++;	
	}
	
	cout<<cnt+1;
	
	return 0;
}