#include <bits/stdc++.h>
using namespace std;
double ret;
double total;
double sum;
int main(){
	for(int i=0; i<20; i++){
		string str="";
		double score=0;
		string grade="";
		
		cin>>str>>score>>grade;
		if(grade=="P"){
			continue;
		}
		total+=score;
		if(grade=="A+"){
			sum+=(4.5*score);	
		}else if(grade=="A0"){
			sum+=(4.0*score);			
		}else if(grade=="B+"){
			sum+=(3.5*score);
		}else if(grade=="B0"){
			sum+=(3.0*score);			
		}else if(grade=="C+"){
			sum+=(2.5*score);
		}else if(grade=="C0"){
			sum+=(2.0*score);
		}else if(grade=="D+"){
			sum+=(1.5*score);	
		}else if(grade=="D0"){
			sum+=(1.0*score);
		}else if(grade=="F"){
			sum+=(0*score);
		}
	}
	cout<<fixed<<setprecision(6)<<sum/total<<"\n";
	return 0;
}