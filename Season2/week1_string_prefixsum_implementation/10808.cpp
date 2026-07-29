#include <bits/stdc++.h>
using namespace std;

int a[26]={0,};

int main(){
	string str;
	
	cin>>str;
	
	for(char c:str){
		a[c-97]++;
	}
	
	for(int i=0; i<26; i++){
		cout<<a[i]<<' ';
	}
	return 0;
}