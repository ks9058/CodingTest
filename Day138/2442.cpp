#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	
	for(int i=1; i<=n; i++){
		//공백 찍기 
		for(int j=n-i; j>0; j--){
			printf(" ");
		}
		//별 찍기
		for(int j=0; j<2*i-1; j++){
			printf("*");
		} 
		printf("\n");
	}
	
	return 0;
}