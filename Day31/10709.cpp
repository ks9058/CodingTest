#include <bits/stdc++.h>
using namespace std;
int n,m;
int arr[104][104];

int main(){
	cin>> n>>m;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			char c;
			cin>>c;
			if(c=='.') arr[i][j]=-1;
		}
	}	
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(arr[i][j]==0){
				int t=1;
                //다음 0이 나오기 전까지 날짜를 증가시키면서 값 넣음음
				while(arr[i][j+1]!=0){
					arr[i][j+1]=t++;
					j++;
				}
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