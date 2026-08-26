#include <bits/stdc++.h>
using namespace std;

int n, ret=INT_MIN;
vector<int> num;
vector<char> op;

int oper(char a, int b, int c){
	if(a=='+') return b+c;
	if(a=='-') return b-c;
	if(a=='*') return b*c;
}

void go(int idx, int _num){

	if(idx==num.size()-1){
		ret=max(ret, _num);
		return;
	}
	
	go(idx+1, oper(op[idx], _num, num[idx+1]));
	
	if(idx + 2 <= num.size()-1){
		int temp=oper(op[idx+1], num[idx+1], num[idx+2]);
		go(idx+2, oper(op[idx], _num, temp));	
	}
}


int main(){
	cin>>n;
	
	for(int i=0; i<n; i++){
		char a;
		cin>>a;
		
		if(i%2==0) num.push_back(a-'0');
		else op.push_back(a);
	}
	
	
	go(0, num[0]);
	
	cout<<ret;
	
	return 0;
}