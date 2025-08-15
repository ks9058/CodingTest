#include <bits/stdc++.h>
using namespace std;

int num1, num2, cnt, ret;

int main(){
	cin>>num1>>num2;
	
	for(int i=1; i<=1000; i++){
		for(int j=1; j<=i; j++){
			cnt++;
			if(cnt>=num1&&cnt<=num2) ret+=i;	
			
			if(cnt>num2){
				cout<<ret;
				return 0;
			}
		}
	}
	return 0;
}