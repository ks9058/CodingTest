#include <bits/stdc++.h>
using namespace std;

string str;
int b;
int ret;
int product=1;
int main(){
	cin>>str>>b;
		for(int i=str.size()-1; i>=0; i--){
		if(str[i]>='A'&&str[i]<='Z'){
			ret=ret+((str[i]-55)*product);
		}else{
			ret=ret+((str[i]-'0')*product);	
		}
		product=product*b;
	}
	cout<<ret;
	return 0;
}