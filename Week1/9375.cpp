#include <bits/stdc++.h>
using namespace std;

int main(){
int test, n;
string b;
string c;
cin>>test;
for(int i=0; i<test; i++){
map<string, int>temp;
	cin>>n;
	for(int j=0; j<n; j++){
		cin>>c>>b;
		temp[b]++;
	}
	int ret=1;
	for(auto a:temp){	
		ret*=((int)a.second+1); // 종류마다 아무것도 입지 않은 상태를 +1 해서 경우의 수 마다 모두 더하기 후 다 곱하기 
	}
	ret--; //모든 종류의 옷을 아무것도 입지 않은 상태를 -1
	cout<<ret<<'\n';
}
	return 0;
}