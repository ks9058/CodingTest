#include <bits/stdc++.h>
using namespace std;

int n;
int main(){
	ios::sync_with_stdio(false); //시간 초과 안나게 하기 
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin>>n;
	priority_queue<int, vector<int>, greater<int>> pq;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			int temp;
			cin>>temp;

			if(pq.size()<n){
			pq.push(temp);	
			}else if(pq.top()<temp){
					pq.pop();
					pq.push(temp);	
			}
		} 
	}
	
	
	cout<<pq.top();
	return 0;
}