#include <bits/stdc++.h>
using namespace std;

vector<pair<int,string>>v[304];
int rcnt;
int n, room_size;
int level;
string nickname;
int main(){
	
	cin>>n>>room_size;
	
	for(int i=0; i<n; i++){
		cin>>level>>nickname;
		
		int check=0; 
		//방 들어가기
		for(int j=0; j<rcnt; j++){
			if(v[j].size()<room_size){
				if(abs(v[j][0].first-level)<=10){
					v[j].push_back({level, nickname});	//한 번에 넣기 
					check=1;
					break;
				}				
			}
		} 
		
		//방 생성하기
		if(!check){
			v[rcnt].push_back({level, nickname});
			rcnt++;
		}
	}
	
	//출력
	for(int i=0; i<rcnt; i++){
		if(v[i].size()==room_size) cout<<"Started!"<<'\n';
		else cout<<"Waiting!"<<'\n';
		
		sort(v[i].begin(), v[i].end(), [](auto &a, auto &b){
		return a.second<b.second;
		});
		
		for(auto player: v[i]){
			cout<<player.first<<' '<<player.second<<'\n';
		}
	} 
	return 0;
}