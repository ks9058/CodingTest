#include <bits/stdc++.h>
using namespace std;
int light[4004];
int N,M;
int a,b,c;


int main(){
	cin>>N>>M;
	//문제를 보면 0번째는 제외하고 한다. 개발자가 아닌 사람들의 첫번째는 0번째가 아니라 1번째라는 것을 기억
	for(int i=1; i<=N; i++){
		cin>>light[i];
	}
	
	for(int i=0; i<M; i++){
		cin>>a>>b>>c;
		
		if(a==1){
			light[b]=c;
		}else if(a==2){
			for(int j=b; j<=c; j++){
				if(light[j]) light[j]=0;
				else light[j]=1;
			}
		}else if(a==3){
			for(int j=b; j<=c; j++){
				light[j]=0;
			}
		}else if(a==4){
			for(int j=b; j<=c; j++){
				light[j]=1;
			}
		}
	}
	for(int i=1; i<=N; i++){
		cout<<light[i]<<' ';
	}
	return 0;
}