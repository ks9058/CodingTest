#include <bits/stdc++.h>
using namespace std;

int score[3];
int ret_time[3];

int n;


int	change_string_to_int(string str){
	int ret=0;
	string s;
	
	s+=str[0];
	ret+=stoi(s)*600;
	
	s[0]=str[1];
	ret+=stoi(s)*60;

	s[0]=str[3];
	ret+=stoi(s)*10;

	s[0]=str[4];
	ret+=stoi(s);

	return ret;
}

string change_int_to_string(int num){
	string ret="";
	ret+=to_string(num/600);
	num%=600;
	ret+=to_string(num/60);
	num%=60;
	ret+=":";
	ret+=to_string(num/10);
	num%=10;
	ret+=to_string(num);
	return ret;
}


int main(){
	cin>>n;
	
	int win_team;
	int last_team;
	int cur_time;
	int last_time=0;

	for(int i=0; i<n; i++){
		string s;
		cin>>win_team>>s;
		
		cur_time=change_string_to_int(s);
		
		
		if(score[1]>score[2]){
			ret_time[1]+=cur_time-last_time;
		}else if(score[1]<score[2]){
			ret_time[2]+=cur_time-last_time;	
		}


		score[win_team]++;
		last_time=cur_time;
	}
	
	if(score[1]>score[2]){
		ret_time[1]+=change_string_to_int("48:00\n")-last_time;
	}else if(score[1]<score[2]){
		ret_time[2]+=change_string_to_int("48:00\n")-last_time;	
	}
		
	
	cout<<change_int_to_string(ret_time[1])<<'\n';
	cout<<change_int_to_string(ret_time[2]);
	
	return 0;
}