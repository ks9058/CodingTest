#include <bits/stdc++.h>
using namespace std;

int a, b, c, m, p, work, t=24;

int main(){
	cin>>a>>b>>c>>m;
	while(t--){
		if(a>m) break;	
		
		//M을 넘기면 번아웃 M까지는 괜찮음 
		if(m>=p+a){
			//일하기 - 일의 양 증가, 피로도 증가 
			work+=b;	
			p+=a;
		}else{
			//휴식 - 피로도 감소, 피로도는 음수면 0이 됨 
			p-=c; 
			if(p<0) p=0; 
		}
		
	}
	cout<<work;
	return 0;
}