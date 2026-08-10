#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	int cnt = 0;
	int num = 0;
	while(n!=cnt){
		
		if(to_string(num).find("666") != string::npos){
			cnt++;
		}
		if(n==0) break;
		num++;
	}
	
	cout<<num-1;
	
	return 0;
}