#include <bits/stdc++.h>
using namespace std;

int ret;
int recursion(const char *s, int l, int r){
	ret++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int n;
int main(){
	cin>>n;
	
	while(n--){
		ret=0;
		string str;
		cin>>str;
		
		
		//1. &str 이건 클래스를 참조하는 값이라서 안된다.
		//클래스 안에는 size, capacity, pointer등의 값을 가진다. 
		
        //2. str[0]은 안에 들어있는 값이다. &str[0]이 첫번째 주소이다 
        cout<<isPalindrome(&str[0])<<' ';
		cout<<ret<<'\n';
	}
}