#include <bits/stdc++.h>
using namespace std;

int main(){
	while(1){
		vector<int> a(3);
		cin>>a[0]>>a[1]>>a[2];
		
		if(a[0]==0 && a[1]==0 && a[2]==0) break;
		
		sort(a.begin(), a.end());
			
		if(a[0]==a[1]&&a[1]==a[2]) cout<<"Equilateral"<<'\n';
		else if(a[0]==a[1] || a[1]==a[2] || a[0]==a[2]){
			if(a[2]<a[1]+a[0]){
				cout<<"Isosceles"<<'\n';
			}else{
				cout<<"Invalid"<<'\n';			
			}	
		} 
		else{
			if(a[2]<a[1]+a[0]){
				cout<<"Scalene"<<'\n';
			}else{
				cout<<"Invalid"<<'\n';			
			}
		}
	}
	return 0;
}