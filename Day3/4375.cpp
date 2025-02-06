#include<bits/stdc++.h>
using namespace std;  

int n;
int main(){ 
	while(cin>>n){
		int num = 1, cnt = 1; 
		while(true){
			if(num % n == 0){
				cout<<cnt<<'\n';
				break;
			}else{
				num = (num * 10) + 1; 
                //정수론에 의하여 출력 직전에 %하는것도 되지만 이전에 해도 된다.
				num %= n; //num %= n;을 사용하면 값의 크기를 줄이면서도 원래의 연산 결과를 유지할 수 있다.->큰 수를 다루지 않고도 cnt값을 찾을 수 있다.
				cnt++;
			}
		} 
	}  
	return 0;
} 


/*
#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
	while(cin>>n){	
	long long num=1;
	int cnt=1; 
		while(1){
			if(num%n==0){
				cout<<cnt<<'\n';
				break;
			}else{
				num=(num%n*10%n)+1; //이것도 됨
				cout<<"num:"<<num<<'\n'; 
				cout<<"cnt:"<<cnt<<'\n';
				cnt++;
			}
		}
	}
	return 0;
} 
*/