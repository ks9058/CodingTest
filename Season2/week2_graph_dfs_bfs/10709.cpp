#include <bits/stdc++.h>
using namespace std;

int n,m;

int a[104][104];

int main(){
	fill(&a[0][0], &a[103][104], -1);
	
	cin>>n>>m;
	
	for(int i=0; i<n; i++){
		string str;
		cin>>str;
		
		for(int j=0; j<m; j++){
			if(str[j]=='c') a[i][j]=0;
		}	
	}
	
	
	for(int i=0; i<n; i++){
		int cnt=0;
		int check=0;
		for(int j=0; j<m; j++){
			if(a[i][j]==0){
				cnt=0;
				check=1;	
			} 
			else if(a[i][j]==-1 && check){
				cnt++;
				a[i][j]=cnt;
			}
		}
	}
	
	
	
	for(int i=0; i<n; i++){	
		for(int j=0; j<m; j++){
			cout<<a[i][j]<<' ';
		}	
		cout<<'\n';
	}
	return 0;
} 