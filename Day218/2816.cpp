#include <bits/stdc++.h>
using namespace std;
int n, point;
string temp;
string ret;

int main(){
	cin>>n;
	vector<string> v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	
	while(v[0]!="KBS1"){
		if(v[point]!="KBS1"){
			point++;
			ret+='1';
		}else{
			temp=v[point];
			v[point]=v[point-1];
			v[point-1]=temp;
			ret+='4';
			point--;	
		}
	}
	
	while(v[1]!="KBS2"){
		if(v[point]!="KBS2"){
			point++;
			ret+='1';
		}else{
			temp=v[point];
			v[point]=v[point-1];
			v[point-1]=temp;
			ret+='4';
			point--;	
		}
	}
	
	cout<<ret<<'\n';
	return 0;
}