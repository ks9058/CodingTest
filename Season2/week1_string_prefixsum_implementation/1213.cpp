#include <bits/stdc++.h>
using namespace std;

char mid;
char alpha[26];
int odd;
string str;

int main(){
	cin>>str;
	for(int i=0; i<str.size(); i++) alpha[str[i]-'A']++;
	
	
	for(int i=0; i<26; i++){
		if(alpha[i]%2!=0){
			odd++;
			mid=(char)(i+'A');
			alpha[i]--;
		}
	}
	
	if(odd>=2){
		cout<<"I'm Sorry Hansoo";
	}else{
		//앞부분 
		for(int i=0; i<26; i++){
			//출력 
			for(int j=0; j<alpha[i]/2; j++) cout<<(char)(i+'A');
		}
		
		//가운데 글자 if문 안넣으면 짝수개에서 '\0'이 들어감
		if(mid) cout<<mid;
		
		//뒷부분 
		for(int i=25; i>=0; i--){
			//출력 
			for(int j=0; j<alpha[i]/2; j++) cout<<(char)(i+'A');			
		}
	}
	return 0;
}