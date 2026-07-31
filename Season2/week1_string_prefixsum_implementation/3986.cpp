#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int cnt=0;
	cin>>n;
	for(int i=0; i<n; i++){
		string str;
		cin>>str;
		stack<char>st;
				
		for(int j=0; j<str.size(); j++){
			if(st.size()!=0&&st.top()==str[j]){
				st.pop();
			}else{
				st.push(str[j]);
			}
		}
		
		if(st.empty()) cnt++;
	}
	cout<<cnt;
	return 0;
}