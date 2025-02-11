#include <bits/stdc++.h>
using namespace std;
int n, cnt;
string s;

int main(){
cin>>n;
for(int i=0; i<n; i++){
	cin >> s;
	stack<char> stk;
	//문자열을 다 집어넣고 비교한 게 아니라 문자열에 첫번째 요소부터 진행하면서 스택에 쌓아감 
	for(char a: s){ //스택에 문자를 넣을때는 이렇게 하나씩 넣어야함->  char 형 
		if(stk.size() && stk.top() == a) stk.pop();
		else stk.push(a);
	} //a는 그냥 지나가는 문자 
	if(stk.size()==0) cnt++; //0 이될 때 마다 비교  
}
cout<<cnt;
return 0;	
}