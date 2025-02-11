#include <bits/stdc++.h>
using namespace std;
map<int,string> a;
map<string, int>b;

int main(){
	int n,m,s;
	string temp;
	cin>>n>>m;
	cin.tie(NULL);
	cout.tie(NULL);
	for(int i=1; i<=n; i++){
		cin>>temp;
		b[temp]=i;
		a[i]=temp;
	}
	for(int i=0; i<m; i++){
		cin>>temp;
		s=atoi(temp.c_str());
		if(s==0){
			cout<<b[temp]<<'\n';
		}else{
			 cout<<a[s]<<'\n';
		}
	}
	return 0;
}