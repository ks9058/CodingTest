#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		int a,b;
		long long ret=0;
		cin>>a>>b;
		
		//a
		if(a==1){
			ret+=5000000;
		}else if(2<=a&&a<=3){
			ret+=3000000;
		}else if(4<=a&&a<=6){
			ret+=2000000;
		}else if(7<=a&&a<=10){
			ret+=500000;			
		}else if(11<=a&&a<=15){
			ret+=300000;
		}else if(16<=a&&a<=21){
			ret+=100000;
		}
		
		
		//b
		if(b==1){
			ret+=5120000;
		}else if(2<=b&&b<=3){
			ret+=2560000;
		}else if(4<=b&&b<=7){
			ret+=1280000;
		}else if(8<=b&&b<=15){
			ret+=640000;			
		}else if(16<=b&&b<=31){
			ret+=320000;
		}
		cout<<ret<<'\n';
	}
	return 0;
}