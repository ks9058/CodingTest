#include <bits/stdc++.h>
using namespace std;

string ret1, ret2;
int a,b,x, check, temp1,temp2;

//num을 n진수 -> 10진수 바꾸기 
int change(string num, int n){
	int ret=0;
	int base=1;
	for(int i=num.size()-1; i>=0; i--){
		if('a'<=num[i]&&num[i]<='z'){
			ret+=(num[i]-'a'+10)*(base);
			
		}else{
			ret+=(num[i]-'0')*(base);
		}
		base*=n;
	}
	return ret; 
}

//진법 변환이 가능한지 검사
bool is_possible(string num, int n){
	for(char a: num){
		int digit=0;
		if('a' <= a && a <= 'z'){
			digit = a - 'a' + 10;
		} else {
			digit = a - '0';
		}
		if(digit >= n) return false;
	}
	return true;
}



int main(){
	cin>>ret1>>ret2;

	for(int i=2; i<=36; i++){
		if(!is_possible(ret1, i)) continue;
		for(int j=2; j<=36; j++){
			if(i==j) continue;
			if(!is_possible(ret2, j)) continue;
			temp1=change(ret1, i);
			temp2=change(ret2, j);
			
			if(temp1==temp2){
				check++;
				a=i;
				b=j;
				x=temp1;
				if(check>1){
					cout<<"Multiple";
					return 0;
				}
			}	
		}		
	}
	if(check==0){
		cout<<"Impossible";		
	}else if(check==1){
		cout<<x<<' '<<a<<' '<<b;
	}
	return 0;
}