#include <bits/stdc++.h>
using namespace std;
string s;
int n;
int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		stack<char>st;
		cin>>s;
		for(char a:s){
			if(a=='(') st.push(a);
			else {
				if(st.size()) st.pop();
				else {
				st.push('e'); //end의 e
				break;	
				}	 
			}	
		}
		if(st.size()==0) cout<<"YES"<<'\n';
		else cout<<"NO"<<'\n';
	}
	return 0;
} 