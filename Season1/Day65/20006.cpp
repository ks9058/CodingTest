#include <bits/stdc++.h>
using namespace std;
int n, room_size;
int rcnt=0;

vector<pair<int,  string>> room[300];

int main(){
	
	cin>> n>>room_size;
	

	for(int i=0; i<n; i++){
		int level;
		string nickname;
		cin>>level>>nickname;

		bool check=0;
		
		
		//방 들어가기
		for(int j=0; j<rcnt; j++){
			if(abs(room[j][0].first-level)<=10&&room[j].size()<room_size){ 
				room[j].push_back({level, nickname});
				check=1;
				break;	
			}
		}
		
		//방 만들기
		if(check == 0 ){
			room[rcnt].push_back({level, nickname});
			rcnt++;
		} 
		 
	}

	for(int i=0; i<rcnt; i++){
		if(room[i].size()==room_size) cout<<"Started!\n";
		else cout<<"Waiting!\n";
		//람다함수 사용법 익히기
		sort(room[i].begin(), room[i].end(), [](auto &a, auto &b){
				return a.second<b.second;
		});
		
		for(auto &a: room[i]){
			cout<<a.first<<' '<<a.second<<'\n';
		}
	}
	
	return 0;
}