#include <bits/stdc++.h>
using namespace std;

int main(){
	int alpha[26];
	int number=0;
	string str;
	
	fill(alpha,alpha+26,0);
	cin>>str;
	for(int i;i<str.size(); i++){
		number=(int)str[i]-97;
		alpha[number]++;	
	}
	
	
	for(int i=0; i<26; i++){
		cout<<alpha[i]<<" ";
	}
}