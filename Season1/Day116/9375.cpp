#include <bits/stdc++.h>
using namespace std;
int T;

int main(){
	cin>>T;
	
	while(T--){
		int n=0;
		int ret=1;
		map<string, int> mp;
		cin>>n;
		for(int i=0; i<n; i++){
			string item,type;
			cin>>item>>type;
			mp[type]++;
		}
		
		for(auto it:mp){	
			ret*=it.second+1; //아이템을 입지 않은 선택지-> +1  
		}	
		
		cout<<ret-1<<'\n'; // 아무것도 입지 않은 경우-> -1 
	}	
	
	return 0;
}