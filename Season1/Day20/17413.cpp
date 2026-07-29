#include <bits/stdc++.h>
using namespace std;

string str;
stack<char> st;
int i;
bool isTag;
char c;
int main(){
	getline(cin, str);

	for(int i=0; i<str.size(); i++){
		
		//case1 띄어쓰기로 구분
		if(isTag==0&&str[i]==' '){
	 		while(st.size()){
	 			cout<<st.top();
	 			st.pop();
			}
			cout<<" ";
			i++;
		} 	 
		//case2 태그로 구분 
		if(str[i]=='<'){
			isTag=1;
			while(st.size()){
	 			cout<<st.top();
	 			st.pop();
			}
		}
        //태그일때는 내용 출력 아닐때는 스택에 문자 쌓음
		if(isTag) cout<<str[i];
		else st.push(str[i]);
		
		if(str[i]=='>') {
		isTag=0;	
		}
	}
	//스택에 남은 문자들 처리 
	  while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
	return 0;
}