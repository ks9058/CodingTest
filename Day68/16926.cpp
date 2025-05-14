#include <bits/stdc++.h>
using namespace std;

int n,m,r;
int arr[304][304];
int temp[304][304];
int temp_m, temp_n;
int main(){
	cin>>n>>m>>r;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>arr[i][j];
			temp[i][j]=arr[i][j];
		}
	}
	int k=min(m,n)/2;
	while(r--){
		temp_n=n-1; 
		temp_m=m-1;
		for(int i=0; i<k; i++){
			//아래
		 	for(int j=i; j<temp_n; j++) temp[j+1][i]=arr[j][i];
			//오른쪽
			for(int j=i; j<temp_m; j++) temp[temp_n][j+1]=arr[temp_n][j];
			//위
			for(int j=temp_n; j>i; j--) temp[j-1][temp_m]=arr[j][temp_m];			
			//왼쪽
			for(int j=temp_m; j>i; j--) temp[i][j-1]=arr[i][j];
		
		temp_n--;
		temp_m--;
		}
	
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				arr[i][j]=temp[i][j];
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<arr[i][j]<<' ';
		}
		cout<<'\n';
	}
	
	return 0;
}