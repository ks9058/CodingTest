#include <bits/stdc++.h>
using namespace std;

int T;
int main(){
	cin>>T;
	
	while(T--){
		int n=0;
		string str="";
		
		cin>>n>>str;
		for(char c:str){
			for(int i=0; i<n; i++){
				cout<<c;
			}			
		}
		cout<<'\n';
	}
	
	return 0;
}