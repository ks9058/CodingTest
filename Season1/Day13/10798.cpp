#include <bits/stdc++.h>
using namespace std;

char str[5][15];
int main(){
	for(int i=0; i<5; i++){
		cin>>str[i]; //이렇게 해서 문자열을 저장 가능능
	}
	
	for(int i=0; i<15; i++){
		for(int j=0; j<5; j++){
			if (str[j][i] != '\0') cout << str[j][i];  // '\0' 체크 추가
		}
	}
	return 0;
}