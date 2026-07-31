#include <bits/stdc++.h>
using namespace std;

int n,m,num, cnt;
vector <int> v;

void combi(int start, vector<int> &b){
	if(b.size()==2){
		if(v[b[0]]+v[b[1]]==m) cnt++;
		return; // return 문 꼭 써주기
	}
	
	for(int i=start+1; i<n; i++){
		b.push_back(i);
		combi(i,b);
		b.pop_back();
	}
}

int main(){
	cin>>n;
	cin>>m;
	for(int i=0; i<n; i++){
		cin>>num;
		v.push_back(num);
	}	
	vector <int> b;
	combi(-1, b);
	
	cout<<cnt;
	return 0;
}