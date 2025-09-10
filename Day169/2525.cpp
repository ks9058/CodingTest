#include <bits/stdc++.h>
using namespace std;
int h,m;
int add;

int main(){
	cin>>h>>m;
	cin>>add;	
	
	m+=h*60;
	m+=add;
	
	if(m/60>=24) cout<<m/60-24;
	else cout<<m/60;
		
	m%=60;
	cout<<" "<<m;
	
	return 0;
}