#include <bits/stdc++.h>
using namespace std;

//약수가 모두 주어지니 가장 작은 값 * 가장 큰 값 하면 본래의 수가 나옴
int n, num;
int mn=INT_MAX, mx=0;

int main(){
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>num;
		mn=min(num, mn);
		mx=max(num, mx);
	}	

	cout<<mx*mn;
	return 0;
}