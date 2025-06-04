#include <bits/stdc++.h>
using namespace std;
char a;
int ret;
int n;
int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a;
		ret+=a-'0';
	}
	cout<<ret;
	return 0;
}