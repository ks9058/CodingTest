#include <bits/stdc++.h>
using namespace std;

string str;
stack <char> st;
int ret;

int main(){
	cin>>str;
	int temp=1;
	
	for(int i=0; i<str.size(); i++){
		char c=str[i];
		
		if(c=='('){
			temp*=2;
			st.push('(');
			
		}else if(c==')'){
			
            //비어있는지 or 짝이 맞는지 확인
			if(st.empty()||st.top()=='['){
				ret=0;
				break;
			}
			
			if(str[i-1]=='(') ret+=temp; //이번 괄호가 바로 닫히는 경우인지
			
			st.pop();// 괄호가 닫히면 값을 더하는 것에 상관없이 무조건 빼야하기 때문에 if문 밖에 있음
			temp/=2;
		
		}else if(c=='['){
			temp*=3;
			st.push('[');			
		}else if(c==']'){

			if(st.empty()||st.top()=='('){
				ret=0;
				break;
			}
			
			if(str[i-1]=='[')
			ret+=temp;	
			
			st.pop();
			temp/=3;
			
		}	
	}
	if (!st.empty()) ret=0; //스택에 값 남아 있으면 오류임
    cout<<ret;
	return 0;
}