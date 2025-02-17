#include <bits/stdc++.h>
using namespace std;  
string s; 
int lcnt, vcnt; //모음, 자음 연속 3번인지 확인하는 변수 

//모음인지 자음인지 구별하는 함수-> 모음이면 true 반환 
bool isVowel(int idx){
	return (idx == 'a' || idx == 'e' || idx == 'i' || idx == 'o' || idx == 'u');
}

int main () { 
	while(true){
		cin >> s; 
		if(s == "end") break; 
		lcnt = vcnt = 0;
		bool flag = 0;
		bool is_include_v = 0; //모음이 하나라도 있는지 확인하기 위해서 
		int prev = -1;
		for(int i = 0; i < s.size(); i++){
			int idx = s[i]; 
			if(isVowel(idx))lcnt++, vcnt = 0, is_include_v = 1;// 모음이면 lcnt++, vcnt=0, is_include_v=1 
			else vcnt++, lcnt = 0;
			if(vcnt == 3 || lcnt == 3) flag = 1; //flag 1이면 not acceptable
			
			// 0번째는 이전 값을 이상한 값으로 가져올 수 있으니 1부터 
			if(i >= 1 && (prev == idx) && (idx != 'e' && idx != 'o')){
				flag  = 1;
			} 
			prev = idx;//prev는 이전 값을 저장 하는 변수 이것으로 현재값과 이전 값을 비교해서 연속 되는건지 알 수 있음 
		}  
		if(is_include_v == 0) flag = 1; //flag 1이면 not acceptable 
		if(flag) cout << "<" << s << ">" << " is not acceptable.\n";
		else cout << "<" << s << ">" << " is acceptable.\n";
	} 
	return 0;
}