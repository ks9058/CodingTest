#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int> > pq; //오름차순
int n;
int main(){
	cin.tie(NULL); //tie는 항상 NULL로 설정 
	cout.tie(NULL);
	cin>>n;
	
	for(int i=0; i<n; i++){
		int k;
		cin>>k;
		if(k!=0) pq.push(k);
		else {
			if(pq.size()==0) cout<<"0"<<'\n';
			else{
			cout<<pq.top()<<'\n';
			pq.pop();	
			} 
		}
	}
	
	
	return 0;
}