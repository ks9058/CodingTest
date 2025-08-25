#include <bits/stdc++.h>
using namespace std;
int n;

//문자열을 바꿔야 하기 때문에 참조로 받기 
void kan(string &str, int end, int start){
	if(end==1) return;
	
	end/=3;
	for(int j=start+end; j<start+ 2*end; j++){
		str[j]=' ';
	}
	kan(str, end, start);//왼쪽 
	kan(str, end, 2*end+start); //오른쪽 	
}

int main(){
	while(cin>>n){
		int size=pow(3, n);
		string str(size, '-');
		
		kan(str, size, 0);
		cout<<str<<'\n';
	}

	return 0;
}