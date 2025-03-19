#include <bits/stdc++.h>
using namespace std;

int n;
string str;
map<string, int> mp;

int main(){
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>str;
		
		size_t pos =str.find('.'); // find함수를 사용할때 size_t타입의 인덱스 값을 반환 
		string temp = str.substr(pos+1);
		
		mp[temp]++;
	}	
	for(auto it : mp){
		cout<<it.first<<' '<<it.second<<'\n';// key, value값 접근 
	}
	return 0;
}