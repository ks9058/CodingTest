#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	
	while(b!=0){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}

long long ret;
int cnt;
int n;
int x;
int arr[1000000];

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cin>>x;
	for(int i=0; i<n; i++){
		if(gcd(arr[i],x)==1){
			cnt++;
			ret+=arr[i];
		}
	}
	cout<<(double)ret/cnt;
	return 0;
}