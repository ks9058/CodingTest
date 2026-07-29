#include <bits/stdc++.h>
using namespace std;
int n;
int goal[3];
int win_time[3];
int present_time;
int last_time;

//다음 시간대에 지난 시간을 계산할 수 있음
//이긴시간 = 현재시간 - 지난시간 
//비겼을 때는 아무 계산도 안함 

int change_to_int(string s){
	int t=0;
	t+=((int)s[0]-'0')*600;
	t+=((int)s[1]-'0')*60;
	
	t+=((int)s[3]-'0')*10;
	t+=((int)s[4]-'0');
	
	return t;
}

string change_to_string(int t){
	string s;
	s+=(char)(t/600+'0');
	t%=600;
	s+=(char)(t/60+'0');
	t%=60;
	s+=':';
	s+=(char)(t/10+'0');
	t%=10;
	s+=(char)(t+'0');
	
	return s;
}

int main(){
	
	cin>>n;
	for(int i=0; i<n; i++){
		int team;
		string t;
		
		cin>>team>>t;
		present_time=change_to_int(t);
		
		if(goal[1]>goal[2]) win_time[1]=win_time[1]+present_time-last_time;
		else if(goal[1]<goal[2]) win_time[2]=win_time[2]+present_time-last_time;
		
		last_time=present_time;
		goal[team]++;
	}

	present_time=change_to_int("48:00");
	
	if(goal[1]>goal[2]) win_time[1]=win_time[1]+present_time-last_time;
	else if(goal[1]<goal[2]) win_time[2]=win_time[2]+present_time-last_time;

	
	
	cout<<change_to_string(win_time[1])<<'\n';
	cout<<change_to_string(win_time[2]);
	return 0;
}