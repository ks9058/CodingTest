#include <bits/stdc++.h>
using namespace std;

int ret;
int temp=1;
string str;
stack <char> st;


int main(){
	cin>>str;

	for(int i=0; i<str.size(); i++){
		char c= str[i];
		
		if(c =='('){
			temp*=2;
			st.push('(');
		}else if(c == '['){
			temp*=3;
			st.push('[');
		}else if(c ==')'){
			if(st.empty() || st.top() != '('){
				ret=0;
				break;
			}
			
			if(str[i-1]== '('){
				ret+=temp;
			}
			temp/=2;
			st.pop();
		}else if(c ==']'){
			if(st.empty() || st.top() != '['){
				ret=0;
				break;
			}
			
			if(str[i-1]== '['){
				ret+=temp;
			}
			temp/=3;
			st.pop();
		}
	}
	
	if(!st.empty()){
		ret=0;
	}
	cout<<ret;
	return 0;
}