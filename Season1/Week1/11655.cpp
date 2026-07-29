#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	getline(cin,str);//한줄로 받을 때는 getline
	for(int i:str){
		if(i>=65&&i<=90){
			if(i>=65&&i<=77) cout<<(char)(i+13);
			else cout<<(char)(i-13);
		}else if(i>=97&&i<=122){
			if(i>=97&&i<=109) cout<<(char)(i+13);
			else cout<<(char)(i-13);
		}else cout<<(char)i;
	}
	return 0;
}