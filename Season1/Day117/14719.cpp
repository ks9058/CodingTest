#include <bits/stdc++.h>
using namespace std;

int arr[504];
int mx_idx, mx_h;
int h,w,ret;
int main(){
	cin>>h>>w;
	
	for(int i=0; i<w; i++){	
		cin>>arr[i];
		if(mx_h<arr[i]){
			mx_idx=i;
			mx_h=arr[i];
		}
	}
	int cur_idx=0;
	int cur_h=arr[0];
	int cnt=0;
	
	//왼쪽 오른쪽 나누는 이유
	//왼쪽 구간은 왼쪽 벽만, 오른쪽 구간은 오른쪽 벽만 신경 쓰면 됨 
	
	//왼쪽 
	for(int i=1; i<=mx_idx; i++){
		
		if(cur_h<=arr[i]){
			int temp=min(cur_h, arr[i]);
			ret+=(temp*(i-cur_idx-1))-cnt;
			cur_idx=i;
			cur_h=arr[i];
			cnt=0;
		}else{
		cnt+=arr[i];
		} 
	}
	cnt=0;
	cur_idx=w-1;
	cur_h=arr[w-1];
	
	//오른쪽
	for(int i=w-2; i>=mx_idx; i--){
		
		if(cur_h<=arr[i]){
			int temp=min(cur_h, arr[i]);
			ret+=(temp*(cur_idx-i-1))-cnt;
			cur_idx=i;
			cur_h=arr[i];
			cnt=0;
		}else{
		cnt+=arr[i];
		} 
	}
	cout<<ret;
	return 0;
}