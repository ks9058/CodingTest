#include <bits/stdc++.h>
using namespace std;



int main(){
	string str;
	
	while(getline(cin, str)){
		if(str==".") break;
		stack<char>st;
		
		for(int i=0; i<str.size(); i++){
			if(st.empty()){
				if(str[i]=='(' || str[i]=='['){
					st.push(str[i]);
				}else if(str[i]==']' || str[i]==')'){
					st.push(')');
					break;
				}
			}else{
				if(str[i]==']' || str[i]==')'){
					if(st.top()=='[' && str[i]==']' ) st.pop();
					else if(st.top()=='(' && str[i]==')') st.pop();
					else break;
				}else if(str[i]=='(' || str[i]=='['){
					st.push(str[i]);
				}
			}
		}
		
		if(st.empty()) cout<<"yes"<<'\n';
		else cout<<"no"<<'\n';
	}	
	return 0;
}