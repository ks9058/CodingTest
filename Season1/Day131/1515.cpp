#include <iostream>
using namespace std;

string str;

int main() {
	cin>>str;
	int idx=0;
	for(int i=1; ; i++){
		string temp=to_string(i);
		
		for(char c : temp){
			if(c==str[idx]){
				//연속된 문자도 처리할 수 있도록 idx 사용 
				idx++;
				if(idx==str.size()){
					cout<<i;
					return 0;
				}
			}
		}
	}    
}
