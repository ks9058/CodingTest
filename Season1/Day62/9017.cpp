#include <bits/stdc++.h>
using namespace std;

int t;
int main(){
	cin>>t;
	//1. 6명이 먼저 들어왔는지 확인 
	//2. 4명까지 점수 계산 
	//3. 5번째 등수 저장 
	while(t--){
		int n;
		cin>>n;
		
		vector<int> team(n+1);
		map<int, int> team_count;
			
		for(int i=1; i<=n; i++){
			cin>>team[i];
			team_count[team[i]]++;
		}
		
		map<int, int> team_come;
		map<int, int> team_score;
		map<int, int> team_come_five;
		
		int score=0;		
		for(int i=1; i<=n; i++){
			if(team_count[team[i]]<6) continue;
			team_come[team[i]]++;
			score++;
			
			if(team_come[team[i]]<=4) team_score[team[i]]+=score;
			if(team_come[team[i]]==5) team_come_five[team[i]]=score;
		}
		
		int win_team_score=INT_MAX;
		int win_team=0;
				
		for (auto &entry : team_score) {
		    int team_id = entry.first;
		    int score_sum = entry.second;
		
		    if (score_sum < win_team_score) {
		        win_team = team_id;
		        win_team_score = score_sum;
		    } else if (score_sum == win_team_score) {
		        if (team_come_five[team_id] < team_come_five[win_team]) {
		            win_team = team_id;
		        }
		    }
		}


		cout<<win_team<<'\n';
	}
	return 0;
}