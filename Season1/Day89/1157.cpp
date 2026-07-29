#include <bits/stdc++.h>
using namespace std;

int arr[26];
int check;
int mx;
char ret;
int main(){
	string str;
	cin>> str;
	
	for(int i=0; i<str.size(); i++){
		if(str[i]>='a'&&str[i]<='z'){
			arr[str[i]-'a']++;
			if(arr[str[i]-'a']>=mx) mx=	arr[str[i]-'a'];
		} 
		if(str[i]>='A'&&str[i]<='Z'){
			arr[str[i]-'A']++;
			if(arr[str[i]-'A']>=mx) mx=	arr[str[i]-'A'];				
		} 
	}

	for(int i=0; i<26; i++){
		if(arr[i]>=mx){
			ret=i+'A';
			check++;
		}
	}
	if(check>1) cout<<"?";
	else cout<<ret;
	
	return 0;
}