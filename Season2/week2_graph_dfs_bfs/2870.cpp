#include <bits/stdc++.h>
using namespace std;

int T;
vector<string> v;

string go(string str){
	string ret;
	int pos=-1;
	for(int i=0; i<str.size(); i++){
		if(str[i]!='0') {
			pos=i;
			break;
		}
	}
	//모두 0 일 때 예외처리 
	if(pos == -1) return "0";
	
	return str.substr(pos);
}
bool cmp(const string& a, const string& b) {
    // 1. 길이가 다르면 짧은 숫자가 더 작음
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }
    // 2. 길이가 같으면 사전순 비교(=숫자 크기 비교)
    return a < b;
}

int main(){
	
	cin>> T;
	while(T--){
		string str;
		int l=0, r=0;
		int check=0;
		
		cin>> str;
		
		for(int i=0; i<str.size(); i++){
			if(isdigit(str[i])){
				check++;
				if(check==1) l=i;
			}else{
				if(check){
					
					string new_str=str.substr(l, check);
					v.push_back(go(new_str));
					check=0;
				}
				l=i;
			}
		}
		
		if(check){
			string new_str=str.substr(l, check);
			v.push_back(go(new_str));

		}
	}
	sort(v.begin(), v.end(), cmp);
	
	for(string k:v){
		cout<<k<<'\n';
	}		
	
	return 0;
}