#include <bits/stdc++.h>
using namespace std;

char arr[104];
int  ret;
int n;
int main(){
	cin>>n;

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n; i++){
		ret+=(int)arr[i]-'0';
	}
	
	cout<<ret;	
	return 0;
}