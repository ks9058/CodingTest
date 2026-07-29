#include <bits/stdc++.h>
using namespace std;
string str, bomb_str;
vector<char> v;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
	cin>>str>>bomb_str;
	
	int str_len=str.size();
	int bomb_len=bomb_str.size();
	
	for(char c:str){
		
		v.push_back(c);
		bool check=1;
		
		if(v.size()>=bomb_len && bomb_str[bomb_len-1]==c){
			for(int i=0; i<bomb_len; i++){
				if(v[v.size()-bomb_len+i]!=bomb_str[i]){
					check=0;
					break;
				}
			}
			if(check){
				for(int i=0; i<bomb_len; i++) v.pop_back();			
			}
		}
	}	
	
	if(v.size()==0){
		cout<<"FRULA";
	}else{
		for(char a:v) cout<<a;
	}
	return 0;
}