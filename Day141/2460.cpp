#include <bits/stdc++.h>
using namespace std;

int current, mx;
int main(){
	for(int i=1; i<=10; i++){
		int in, out;
		cin>>out>>in;
		current-=out;
		current+=in;
		mx=max(mx, current);
	}
	cout<<mx;
	return 0;
}