#include <bits/stdc++.h>
using namespace std;
int n, cnt;
string s;

//문제를 봤을때 이해가 안되면 뒤집어 보고 90도로 돌려보고 반복하고 하면서 아이디어를 찾는다. 
//해당 문제에서는 가장위(뒤)를 참조하는 게 중요 -> stack 
//TIP: 짝짓기또는 폭발이라는 단어가 나오면 -> stack을 생각 
int main(){
cin>>n;
for(int i=0; i<n; i++){
	cin >> s;
	stack<char> stk;//문자열이 n개 들어오기 때문에 stack을 안에다가 넣어놓음 
	for(char a: s){ //들어오는 문자와 맨 위에 탑을 비교 함 
		if(stk.size() && stk.top() == a) stk.pop(); //stk.size() 사이즈를 먼저 체크해야 한다. size==0이면 비어있는 것이기 때문에 없는데 참조하면 오류  
		else stk.push(a);
	}
	if(stk.size()==0) cnt++;
}
cout<<cnt;
return 0;	
}