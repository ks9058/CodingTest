#include <bits/stdc++.h>
using namespace std;
string str;

bool isVowel(char c){
 return c=='a' || c=='e' || c=='i' || c=='o' || c=='u'; 	
}

int main(){
	while(1){
		cin>>str;
		if(str=="end") break;
		
		bool check1=0; 
		bool check2=1;
		bool check3=1;
		
		char last=' ';
		
		int cnt_vow=0;
		int cnt_con=0;
		
		for(int i=0; i<str.size(); i++){
			//1. 모음 포함하는지 검사
			if(!check1){
				if(isVowel(str[i])) check1=1;
			} 	
			//2.모음이 3개 혹은 자음이 3개 연속인지 검사
			if(check2){ 
				
				if(isVowel(str[i])){
					cnt_vow++;
					cnt_con=0;
				}else{
					cnt_vow=0;
					cnt_con++;
				}
				
				if(cnt_vow>=3 || cnt_con>=3) check2=0;				
			}
			//3. 같은 글자가 연속적으로 두번 오면 안되나, ee 와 oo는 허용
			if(check3){
				if(last==str[i] && str[i]!='e' && str[i]!='o') check3=0;
				last=str[i]; 
			} 	
		}
		
		cout<<"<"<<str<<">";
		if(check1 && check2 && check3) cout<<" is acceptable."<<'\n';
		else cout<<" is not acceptable."<<'\n';	
	}	
	return 0;
}