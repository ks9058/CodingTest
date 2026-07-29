#include <bits/stdc++.h>
using namespace std;

string str;
stack <char> st;
int ret;
int temp=1;

int main(){
	cin>>str;
	
	for(int i=0; i<str.size(); i++){
		char c= str[i];
		
		if(c=='('){
			temp*=2;
			st.push(c);
		}else if(c=='['){
			temp*=3;
			st.push(c);
		}else if(c==')'){
			if(st.empty() || st.top()!='('){
				ret=0;
				break;
			}
			
			if(str[i-1]=='(') ret+=temp;
			
			st.pop();
			temp/=2;

		}else if(c==']'){
			if(st.empty() || st.top()!='['){
				ret=0;
				break;
			}
			
			if(str[i-1]=='[') ret+=temp;
			
			//닫는 괄호에서는 항상 처리해줘야 하는 작업 
			st.pop();
			temp/=3;
			
		}
	}
	
	if (!st.empty()) {
        ret = 0;
    }
	cout<<ret;
	return 0;
}