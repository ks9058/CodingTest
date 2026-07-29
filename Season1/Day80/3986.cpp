#include <bits/stdc++.h>
using namespace std;

int main(){
	int n=0;
	int cnt=0;
	cin>>n;
	
	for(int i=0; i<n; i++){
		string str="";
		cin>>str;
		stack<char>st;
		for(char a:str){
			if(st.size()==0){
				st.push(a);
				continue;	
			}  
			if(st.top()==a){
				st.pop();
			}else{
				st.push(a);
			}
		}
		if(st.size()==0) cnt++;
	}
	cout<<cnt;
	return 0;
}