#include <bits/stdc++.h>
using namespace std;

int n, ns, p;
int main(){
	cin>>n>>ns>>p;
	vector<int> v(n);

	for(int i=0; i<n; i++) cin>>v[i];
    
	int rank=1;
	for(int i=0; i<n; i++){
		if(v[i]>ns) rank++;
		else break;
	}
	
	if(n==p && ns<=v.back()) cout<<-1; //요구사항 그대로 코드로 변환
	else cout<<rank;


	return 0;
}