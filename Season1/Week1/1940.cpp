#include <bits/stdc++.h>
using namespace std;

int arr[15000];
int n,m;
int cnt;

void combi(int start, vector<int> &b){
	if(b.size()==2){
		if(arr[b[0]]+arr[b[1]]==m) cnt++; //배열로 접근하는 법 기억억
		return;
	}
	for(int i=start+1; i<n; i++){
		b.push_back(i);
		combi(i,b);
		b.pop_back();
	}
	return;
}


int main (){
	vector<int> b;
	cin>>n;
	cin>>m;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	combi(-1,b);
	cout<<cnt;
	return 0;
} 