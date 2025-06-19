#include <bits/stdc++.h>
using namespace std;

string str, ret, temp;
int alpha[26];
char c;
int check; 

bool isOdd(int n){ 
	if(n%2==0) return 0;
	else return 1;
}

int main(){
	cin>>str;
	for(int i=0; i<str.size(); i++){
		alpha[str[i]-'A']++;
	}
	
	for(int i=0; i<26; i++){
		if(isOdd(alpha[i])){
			check++;
			c=i+'A';	
		}
	}
	
	if(check>1){
		cout<<"I'm Sorry Hansoo";
		return 0;	
	} 
	
	for(int i=0; i<26; i++){
		for(int j=0; j<alpha[i]/2; j++){
			ret+=(char)(i+'A'); //형변환 하기 위해서 문자쪽도 괄호 치기 
		}
	}
	
	temp=ret;
	reverse(temp.begin(), temp.end());
	
	if(check==1)ret+=c; //check가 없을 수도 있으니 있을때만 추가 
	ret+=temp;
	
	cout<<ret;
	return 0;
}