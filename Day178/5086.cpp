#include <bits/stdc++.h>
using namespace std;
int num1, num2;
int main(){
	while(1){
		cin>>num1>>num2;
		if(num1==0&&num2==0) break;
		
		if(num1<num2){
			if(num2%num1==0){
				cout<<"factor"<<'\n';
			}else{
				cout<<"neither"<<'\n';
			}
		}else if(num1>num2){
			if(num1%num2==0){
				cout<<"multiple"<<'\n';
			}else{
				cout<<"neither"<<'\n';
			}
		}
	}
	return 0;
}