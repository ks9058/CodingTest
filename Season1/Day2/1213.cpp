#include<bits/stdc++.h> 
using namespace std; 
string s, ret; 
int cnt[200], flag; //배열 길이를 넉넉하게 잡고 아스키 코드값을 그대로 넣음 
char mid;
int main() {
	cin.tie(NULL);
	cin >> s;
	for(char a : s)cnt[a]++; //아스키코드값에 해당하는 인덱스를 넣음 
	for(int i = 'Z'; i >= 'A'; i--){
		if(cnt[i]){
			if(cnt[i] & 1){ //비트로 보면 홀수는 맨마지막 비트가 1임-> 홀수 검사 
				mid = char(i); //가운데 글자 저장 
				flag++; //홀수는 펠린드롬에 한글자만 존재해야함 검사하기 위한 증가 
				cnt[i]--; //홀수가 짝수개나 0개가 됨 
			}
			if(flag == 2)break; //홀수가 짝수개인지 검사 
			for(int j = 0; j < cnt[i]; j += 2){//짝수기 때문에 for문 안에서 두개를 넣음 그렇기 때문에 j+=2 
				ret = char(i) + ret; 
				ret += char(i);
			}
		}
	}
	if(mid)ret.insert(ret.begin() + ret.size() / 2, mid);//mid를 중간에 넣음 
	if(flag == 2)cout << "I'm Sorry Hansoo\n";//정확하게 복붙해서 붙이기 
	else cout << ret << "\n"; 
}