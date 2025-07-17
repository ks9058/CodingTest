#include <bits/stdc++.h>
using namespace std;

int a,b,c,m, p, ret;

int main(){
	cin>>a>>b>>c>>m;
	
	for(int i=0; i<24; i++){
		if(a>m) break;
		if(p+a<=m){
			 ret+=b;
			 p+=a;	
		}else{
			p-=c;
			if(p<0) p=0;
		}
	}
	cout<<ret;
	return 0;
}
