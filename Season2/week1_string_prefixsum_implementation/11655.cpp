#include <bits/stdc++.h>
using namespace std;

string str;

int main(){
	getline(cin, str);	
	for(int i=0; i<str.size(); i++){
		if((int)'a'<=str[i]&&str[i]<=(int)'z'){
			if(str[i]+13>(int)'z'){
				str[i]=(int)'a'+(str[i]+13-(int)'z'-1);
			}else{
				str[i]=str[i]+13;
			}	
		}else if((int)'A'<=str[i]&&str[i]<=(int)(int)'Z'){
			if(str[i]+13>(int)'Z'){
				str[i]=(int)'A'+(str[i]+13-(int)'Z'-1);
			}else{
				str[i]=str[i]+13;
			}				
		}
	}
	cout<<str;
	return 0;
}