#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, less<int>> pq;
int n;
int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	
	for(int i=0; i<n; i++){
		int k;
		cin>>k;
		if(k==0){
			if(pq.size()==0) cout<<"0\n";
			else{
				cout<<pq.top()<<'\n';
				pq.pop();
			}
		}else{
			pq.push(k);
		}
	}
	return 0;
}