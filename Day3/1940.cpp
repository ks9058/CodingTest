#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[15000];
int cnt=0;	

void combi(int start, vector<int> &b){
	if(b.size() == 2){
		int t1=b[0];
		int t2=b[1];
		if(a[t1]+a[t2]==m)
		{
		cnt++;
		}
		return;// 리턴문이 꼭 들어가야함
	}
	for(int i=start+1; i<n; i++){
		b.push_back(i);
		combi(i,b);
		b.pop_back();
	}
	return;
}

int main(){
	cin>>n;
	cin>>m;
	
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	vector<int>v;
	combi(-1,v);
	cout<<cnt;
} 
/*
2번째 방법
#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[15000];
int cnt=0;	//count라는 문자는 쓰면 안됨 

int main(){
	cin>>n;
	cin>>m;
	
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			if(a[i]+a[j]==m) cnt++; // 두 개써야 하니까 i하나 j하나
		}
	}
	cout<<cnt;
} 
*/