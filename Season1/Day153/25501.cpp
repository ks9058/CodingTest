#include <bits/stdc++.h>
using namespace std;

int T;
int cnt;
string str;

int recursion(const char *s, int l, int r){
    cnt++;	
	if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
	return recursion(s, 0, strlen(s)-1);

}

int main(){
    cin>>T;
   
    while(T--){
	str="";
    cnt=0;
	cin>>str;
	
	//아래와 같은 줄로 출력을 했었지만 답이 제대로 나오지 않았음
    //cout<<isPalindrome(&str[0])<<' '<<cnt<<'\n';
	//찾아보니 C++ 에서 cout은 평가 순서가 보장되지 않아서 cnt값을 먼저 출력함 
	
	cout<<isPalindrome(&str[0])<<' ';
	cout<<cnt<<'\n';
	}
}