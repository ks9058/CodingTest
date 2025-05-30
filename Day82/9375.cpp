#include <bits/stdc++.h>
using namespace std;

int t;
int main(){
	cin>>t;
	while(t--){
		int n=0;
		int ret=1;
		map<string, int> mp;
		string str="";
		string no="";
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>no>>str;
			mp[str]++;			
		}
		for(auto a:mp){
			//경우의 수를 조합할 때 입는 옷만 조합하는 것이 아니라 아무것도 입지 않은 상태도 추가해서 계산-> +1
			ret*=a.second+1;
		}
		//최종적으로 아무것도 입지 않은 상태 -1 
		cout<<ret-1<<'\n';

	}
	return 0;
}