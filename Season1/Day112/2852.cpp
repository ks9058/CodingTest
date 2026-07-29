#include <bits/stdc++.h>
using namespace std;

int n;
int team_score[3];
int team_wintime[3];

int change_time(string str){
	int t=0;
	
	t+=((int)(str[0]-'0')*600);
	t+=((int)(str[1]-'0')*60);
	
	t+=((int)(str[3]-'0')*10);
	t+=((int)(str[4]-'0')*1);
		
	return t;
}

string change_time_string(int t){
	string str="";
	
	str+=to_string(t/600);
	t%=600;
	str+=to_string(t/60);
	t%=60;
	
	str+=":";
	
	str+=to_string(t/10);
	t%=10;
	str+=to_string(t);
	
	return str;
}

int main(){
	cin>>n;
	int last_time=0;
	int current_time=0;
	int team=0;
	string t="";
	for(int i=0; i<n; i++){
		cin>>team>>t;
		current_time=change_time(t);

		
		if(team_score[1]>team_score[2]){
			team_wintime[1]+=current_time-last_time;
		}else if(team_score[1]<team_score[2]){
			team_wintime[2]+=current_time-last_time;
		}
		team_score[team]++;
		last_time=current_time;	
	}
		
	current_time=change_time("48:00");
		if(team_score[1]>team_score[2]){
			team_wintime[1]+=current_time-last_time;
		}else if(team_score[1]<team_score[2]){
			team_wintime[2]+=current_time-last_time;
		}
	
	cout<<change_time_string(team_wintime[1])<<'\n';
	cout<<change_time_string(team_wintime[2])<<'\n';
	
	return 0;
}