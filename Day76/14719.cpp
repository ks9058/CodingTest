#include <bits/stdc++.h>
using namespace std;

int w,h, total;
int arr[504];
int main(){
	cin>>h>>w;
	
	for(int i=0; i<w; i++) cin>>arr[i];
	
	for(int i=1; i<w-1; i++){
		int left_max=0, right_max=0, hight=0;
		for(int j=i-1; 0<=j; j--){
			left_max=max(left_max, arr[j]);
		}
		for(int j=i+1; j<w; j++){
			right_max=max(right_max, arr[j]);
		}
		
		hight=min(right_max, left_max);
		if(hight<=arr[i]) continue;
		total=total+(hight-arr[i]);
	
	}
	cout<<total;
	return 0;
}