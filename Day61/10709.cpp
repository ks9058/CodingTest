#include <bits/stdc++.h>
using namespace std;
int arr[104][104];
int h,w;

int main(){
	cin>>h>>w;
	
	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			char c;
			cin>>c;
			if(c=='.')arr[i][j]=-1;
		}
	}
	for(int i=0; i<h; i++){
		int time=-1;
		
		for(int j=0; j<w; j++){
			if(arr[i][j]==0) time=0;
			else if(time!=-1) {
				time++;
				arr[i][j]=time;
			}
			cout<<arr[i][j]<<' ';
		}
		cout<<'\n';
	}
	
	return 0;
}