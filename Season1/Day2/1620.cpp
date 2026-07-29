#include <bits/stdc++.h>
using namespace std;


int n,m;
string temp;
map<string,int>mp; // 자료구조 2개 필요 
map<int,string>mp2; // 자료구조 2개 필요 
	
int main(){
	cin.tie(NULL);//버퍼를 지워 성능 개선 
	cout.tie(NULL);//버퍼를 지워 성능 개선
	cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>temp;
		mp[temp]=i+1; // []는 배열에서만 인덱스 
		mp2[i+1]=temp; // 맵이나 다른 컨테이너에서는 다른 역할을 한다. 맵에서는 mp[key]와 같은 역할을 한다. 
	}
	for(int i=0; i<m; i++){
		cin>>temp;
		if(atoi(temp.c_str())==0){ //atoi는 int로 못바꾸면 0을 반환한다. 그래서 해당 문제에서도 0번을 제외한 문제로 나왔다.  
			cout<<mp[temp]<<'\n';
		}else{
			cout<<mp2[atoi(temp.c_str())]<<'\n'; //atoi사용법 외우기 str.c_str()을 꼭 붙이기  
		}
	}
} 