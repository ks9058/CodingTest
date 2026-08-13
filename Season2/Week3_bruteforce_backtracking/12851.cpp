#include <bits/stdc++.h>
using namespace std;
const int MAX = 100000;
int visited[MAX+4];
int cnt[MAX+4];
int n, k,  mn=INT_MAX;
vector<int>v;



int main(){
	cin>>n>>k;
	
	if(n==k){
		cout<<0<<'\n'<<1;
		return 0;
	}
	
	visited[n]=1;
	cnt[n]=1;
	
	queue<int>q;
	q.push(n);
	
	while(q.size()){
		int now=q.front();
		q.pop();
		
		for(int next : {now-1, now+1, now*2}){
			if(0<=next && next <= MAX){
				if(!visited[next]){
					q.push(next);
					visited[next]= visited[now]+1;
					cnt[next] += cnt[now];
				}else if(visited[next] == visited[now]+1){
					cnt[next] += cnt[now];
				}
			}	
		}
	}

	cout<<visited[k] -1 << '\n';
	cout<<cnt[k] << '\n';
	
	return 0;
}