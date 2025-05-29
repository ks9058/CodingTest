#include <bits/stdc++.h>
using namespace std;

int n;
queue<int> q;
int main(){
	cin>>n;
	for(int i=1; i<=n; i++){
		q.push(i);
	}
	while(q.size()!=1){
		q.pop();
		q.push(q.front()); //처음 뺐을 때 한 개만 남아도 다시 삽입되니 상관없음
		q.pop();
	}
	cout<<q.front();
	return 0;
}