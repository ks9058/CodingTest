#include <bits/stdc++.h>
using namespace std;

string str;
int check=0;
vector<string> v;


int main(){
	cin>>str;
	
	for(int i=0; i<str.size(); i++){
		if(str[i]=='p'){
			if(i+1 < str.size() && str[i+1]=='i') i++;
			else{
				check-1;
				break;
			}
		}else if(str[i]=='c'){

			if(i+2 < str.size() && str[i+1]=='h' && str[i+2]=='u') i=i+2;
			else {
				check=1;
				break;
			}
		}else if(str[i]=='k'){
			if(i+1 < str.size() &&str[i+1]=='a') i++;
			else{
				check=1; 
				break;
			}
		}else{
			check=1;
			break;
		}
	}	
	
	if(check ) cout<<"NO"<<'\n';
	else cout<<"YES"<<'\n';
	return 0;
}