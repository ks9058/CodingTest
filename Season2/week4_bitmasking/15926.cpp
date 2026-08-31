#include <bits/stdc++.h>
using namespace std;


int n, ret, cnt, check;
int d[200004];
 
string str;
stack <int> st;

int main(){
	cin>>n;
	cin>>str;
	
	for(int i=0; i<n; i++){
		
		if(str[i]=='('){
			st.push(i);
		}else if(st.size()){
			d[i]=d[st.top()]=1;
			st.pop();			
		}
	}
	
	for(int i=0; i<n; i++){
		if(d[i]){
			cnt++;
			ret=max(ret, cnt);
		}else cnt=0;
	}

	
	cout<<ret;
	return 0;
	
}