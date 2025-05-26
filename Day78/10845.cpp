#include <bits/stdc++.h>
using namespace std;
int n;
queue<int>q;
int main(){
	cin>>n;
	
	for(int i=0; i<n; i++){
		string str;
		int num;
		cin>>str;
		
		if(str=="push"){
			cin>>num;
			q.push(num);
		}else if(str=="front"){
			if(q.size()==0) cout<<"-1\n";
			else cout<<q.front()<<'\n';
		}else if(str=="back"){
			if(q.size()==0) cout<<"-1\n";
			else cout<<q.back()<<'\n';			
		}else if(str=="size"){
			cout<<q.size()<<'\n';
		}else if(str=="empty"){
			if(q.size()==0) cout<<"1\n";
			else cout<<"0\n";
		}else if(str=="pop"){
			if(q.size()==0) cout<<"-1\n";
			else{
				cout<<q.front()<<'\n';
				q.pop();	
			} 						
		}
		
	}
	return 0;
}