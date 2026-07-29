#include <bits/stdc++.h>
using namespace std;

int N,T;
int main(){
	cin>>N;
	bool v[104]={0,};
	for(int i=1; i<=N; i++){
		cin>>v[i];
	}
	cin>>T;
	
	while(T--){
		int gender=0, number=0;
		
		cin>>gender>>number;
		
		if(gender==1){
			for(int i=number; i<=N; i+=number){
				v[i]=!(v[i]);
			}
		}else if(gender==2){
			for(int i=0; i<=N/2; i++){
				if(number-i>0 && number+i<=N){
					if(i==0){
					v[number] = !(v[number]);
					continue;	
					} 
					
					if(v[number-i]==v[number+i]){
						v[number-i]=!(v[number-i]);
						v[number+i]=!(v[number+i]);	
					}else{
						break;
					}				
				}
			}
		}
	}	
	
    for (int i=1; i<=N; i++) {
        cout<<v[i]<<' ';
        if (i%20==0) cout<<'\n';
    }
}