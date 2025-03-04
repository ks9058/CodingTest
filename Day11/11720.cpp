#include <bits/stdc++.h>
using namespace std;

int n,ret;
string str;

int main(){
	cin>>n;
	cin>>str;
	
	for(int i=0; i<n; i++){
		ret=ret+((int)str[i]-48);
	}
	cout<<ret;
	return 0;
}