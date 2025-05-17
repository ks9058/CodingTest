#include <bits/stdc++.h>
using namespace std;

stack<int>st;
int n;
int main(){
	cin>>n; 
	
	for(int i=0; i<n; i++){
		string str;
		int k;
		cin>>str;
		if(str=="push"){
			cin>>k;
			st.push(k);
		}else if(str=="pop"){
			if(st.size()==0){
				cout<<"-1\n";
			}else{
				k=st.top();
				st.pop();
				cout<<k<<'\n';	
			}
		}else if(str=="size"){
			cout<<st.size()<<'\n';
		}else if(str=="empty"){
			if(st.size()==0){
				cout<<"1\n";
			}else{
				cout<<"0\n";
			}
		}
		else if(str=="top"){
			if(st.size()==0){
				cout<<"-1\n";
			}else{
				k=st.top();
				cout<<k<<'\n';	
			}
		}
	}
	return 0;
}