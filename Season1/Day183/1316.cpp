#include <bits/stdc++.h>
using namespace std;
int n, cnt;

int main(){
	cin>>n;
	
	for(int i=0; i<n; i++){
		string str;
		cin>>str;
		bool alpha[26]={0,};
		bool check=0;
		char last=' ';
		
		for(int j=0; j<str.size(); j++){
			if(j==0){
				last=str[j];
				continue;
			}
			if(alpha[str[j]-'a']==0){
				if(last!=str[j]){
					alpha[last-'a']=1;
					last=str[j];
				}
			}else{
				check=1;
				break;
			}	
		}
		if(!check) cnt++;
	}
	cout<<cnt;
	return 0;
}