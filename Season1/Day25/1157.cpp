#include <bits/stdc++.h>
using namespace std;
string str;
char ret;
int alpha[100];
int temp;

int main(){
	cin>>str;
	for(int i=0; i<str.size(); i++){
		if(str[i]>=97&&str[i]<123){
			alpha[str[i]-32]++;		
		}
		else{
			alpha[str[i]]++;
		}
	}
	
	for(int i=0; i<100; i++){
		if(alpha[i]>temp){
			ret=i;
			temp=alpha[i];
		}		
	}
	for(int i=0; i<100; i++){
		if(temp==alpha[i]&&ret!=i){
			ret='?';
		}		
	}
	cout<<ret;
	
	return 0;
}