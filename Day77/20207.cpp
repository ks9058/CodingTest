#include <bits/stdc++.h>
using namespace std;
int n;
int arr[370];
int total;
int width;
int height;

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		int start=0;
		int end=0;
		
		cin>>start>>end;
		for(int j=start; j<=end; j++) arr[j]++;
	}
	for(int i=1; i<=365; i++){
		if(arr[i]>0) {
			width++;
			height=max(height, arr[i]);
		}else{
			total+=width*height;
			width=0;
			height=0;
		}
	}
	if(width>0) total+=width*height; //계산이 끝났을 때 width 값이 있으면 마지막 덩어리가 있음 
	
	cout<<total;
	return 0;
}