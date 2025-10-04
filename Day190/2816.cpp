#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	int idx1=0, idx2=0;
	for(int i=0; i<n; i++){
		string str="";
		cin>>str;
		if(str=="KBS1") idx1=i;
		if(str=="KBS2") idx2=i;
	}
	
	string ret="";
	for(int i=0; i<idx1; i++){
		ret+="1";
	}
	for(int i=0; i<idx1; i++){
		ret+="4";
	}
	
	//KBS1이 KBS2 아래에 있었으면 +1 해준 -> 올리는 과정에서 한 칸 밀림 
	if(idx1>idx2){
		idx2++;
	}
	
	for(int i=0; i<idx2; i++){
		ret+="1";
	}
	
	//두 번째 위치로 가야하기 때문에 -1 
	for(int i=0; i<idx2-1; i++){
		ret+="4";
	}
	cout<<ret;
	return 0;
} 