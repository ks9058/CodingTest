#include <bits/stdc++.h>
using namespace std;

int car[104]={0,};
int A,B,C;
int charge;
int main(){
	cin>> A>>B>>C;
	
	for(int i=0; i<3; i++){
		int start=0, end=0;
		cin>>start>>end;
		for(int j=start; j<end; j++){
			car[j]++;
		}
	}
	for(int i=0; i<104; i++){
		if(car[i]==1) charge+=A;
		else if(car[i]==2) charge+=(2*B);
		else if(car[i]==3) charge+=(3*C);
	}
	
	cout<<charge;
	return 0;
}