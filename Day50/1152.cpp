#include<bits/stdc++.h>
using namespace std;
string str;
int ret; 
int main(){
	getline(cin,str);
	
	if(str[0]==' ') ret--; //예외처리 
	
	for(int i=0; i<str.size(); i++){
		if(str[i]==' ') ret++;
	}
	//예외처리 
	if(str[str.size()-1]==' ') cout<<ret;
	else cout<<ret+1;
	return 0;
}	