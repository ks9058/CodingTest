#include <bits/stdc++.h>
using namespace std;

char m[]={'a','e','i','o','u'};
int main(){
	string str="";
	while(cin>>str){
		if(str=="end") break;
		bool check1=0, check2=1, check3=1;
		int cnt=0;
		char last;
		
		bool ism=0;
		

		for(int i=0; i<str.size(); i++){
			
			
			//모음인지 검사 
				if(str[i] == 'a' || str[i] == 'e'|| str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
					check1=1;
					if(ism==0) cnt=0;

					ism=1;
					cnt++;
				}else{
					if(ism==1) cnt=0;
					ism=0;
					cnt++;
				}
			
			
			if(cnt==3) check2=0;
			if(last==str[i] && str[i]!='e' &&str[i]!='o') check3=0;
			last=str[i];
		
		}
		if(check1 && check2 && check3) cout<<"<"<<str<<"> is acceptable.\n";
		else cout<<"<"<<str<<"> is not acceptable.\n";
	}
	return 0;
}