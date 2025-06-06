#include <bits/stdc++.h>
using namespace std;

char str[5][15];
int main(){
	for(int i=0; i<5; i++){
		cin>>str[i];
	}
	
	for(int i=0; i<15; i++){
		for(int j=0; j<5; j++){
			if(str[j][i]) cout<<str[j][i]; //있는 것만 출력  
		}
	}
	return 0;
}