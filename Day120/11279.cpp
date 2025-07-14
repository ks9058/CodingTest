#include <bits/stdc++.h>
using namespace std;

priority_queue<int , vector<int>, less<int>> pq;
int n;

int main(){
	cin.tie(NULL);
	
	cin>>n;
	
	for(int i=0; i<n; i++){
		int num;
		cin>>num;
		
		if(num!=0){
			pq.push(num);
		}else{
			if(pq.empty()){
				cout<<"0\n";
			}else{
				cout<<pq.top()<<'\n';
				pq.pop();
			}
		}
	}	
	return 0;
}