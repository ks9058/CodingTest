//문제에서 글자 범위가 100글자 이상이기에 longlong으로도 안된다. -> string으로 하기 
#include <bits/stdc++.h>
using namespace std;

int n; 
vector<string> v; 
string s, ret;

void go(){
	while(true){
		//front를 쓸때는 size를 먼저 체크하고 사용  
		if(ret.size() && ret.front()=='0') ret.erase(ret.begin()); //첫째 글자가 0이면 삭제 
		else break;
	}
	if(ret.size()==0) ret="0";
	v.push_back(ret);
	ret="";
}

//숫자인 문자열 비교할때 size를 먼저 비교하고 size가 같으면 아스키코드 순으로 비교 
bool cmp(string a, string b){
	if(a.size() == b.size()) return a < b;
	return a.size() < b.size();
}

int main () {
	cin >> n; 
	for(int i = 0; i < n; i++){
		cin >> s; 
	 	ret = "";
		for(int j = 0; j < s.size(); j++){
			if(s[j] < 65)ret += s[j];
			else if(ret.size()) go(); 
		}
		if(ret.size()) go(); 
	}
	sort(v.begin(), v.end(), cmp);
	for(string i : v)cout << i << "\n"; 
	return 0;
}