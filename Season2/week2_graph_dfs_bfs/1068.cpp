#include <bits/stdc++.h>
using namespace std;

int n, m, root;
vector<int> v[104];


int dfs(int here){
	int ret=0;
	int child=0;
	
	for(int there: v[here]){
		if(there==m) continue;
		ret+= dfs(there);
		child++;
	}
	
	if(child==0) return 1;
	return ret;
}



int main(){
	cin>>n;
	
	for(int i=0; i<n ;i++){
		int num=0;
		cin>>num;
		if(num==-1) root=i;
		v[num].push_back(i);	
	}	
	cin>>m;
	if(m == root){
        cout << 0 << "\n";return 0;
    }
		
	cout<<dfs(root);
	return 0;
}