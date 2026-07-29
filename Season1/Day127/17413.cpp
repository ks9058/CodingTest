#include <bits/stdc++.h>
using namespace std;

string str;
string temp;
int check=0;

int main(){
	getline(cin, str);

	for(int i=0; i<str.size(); i++){
		if(str[i]=='<'){
			check=1;
			reverse(temp.begin(), temp.end());
			cout<<temp;
			temp="";
		} 
		
		if(check==1){
			if(str[i]=='>') {
				check=0;
				cout<<'>';
				continue;	
			}else{
				cout<<str[i];	
				continue;	
			}	
		} 
		
		if(check==0){
			if(str[i]==' '){
			reverse(temp.begin(), temp.end());
			cout<<temp<<' ';
			temp="";
			}else temp+=str[i];
		}
	}
	reverse(temp.begin(), temp.end());
	cout<<temp;
	
	return 0;
}