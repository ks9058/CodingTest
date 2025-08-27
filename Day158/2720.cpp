#include <bits/stdc++.h>
using namespace std;

int T;

int quarter=25;
int dime=10;
int nickel=5;
int penny=1;

int main(){	
	cin>>T;
	while(T--){
		int cent=0;
		cin>>cent;
		if(cent/quarter>0){
			cout<<cent/quarter<<' ';
			cent=cent%quarter;	
		}else cout<<0<<' '; 	
		
		if(cent/dime>0){
			cout<<cent/dime<<' ';
			cent=cent%dime;	
		}else cout<<0<<' ';	
		
		if(cent/nickel>0){
			cout<<cent/nickel<<' ';
			cent=cent%nickel;	
		}else cout<<0<<' ';	
		
		if(cent/penny>0){
			cout<<cent/penny<<'\n';
			cent=cent%penny;	
		}else cout<<0<<'\n';	
	}
	return 0;
}