#include <bits/stdc++.h>
using namespace std;
int n;
int arr[104];
int main(){
	cin>>n;
	
	//수열 B 
	for(int i=1; i<=n; i++){
		cin>>arr[i];
	}
	
	int temp=0;
	//수열 A 찾기 
	//Ai = (B * i) - temp
	//temp: 누적합 
	
	for(int i=1; i<=n; i++){
		int ret=(arr[i]*i)-temp;
		cout<<ret<<' ';
		temp=ret+temp;
	}
	return 0;
}