#include <bits/stdc++.h>
using namespace std; 

int n;
int a[1000004];  // 입력 숫자 배열
int ret[1000004];  // 오큰수를 저장할 배열
stack<int> s;  // 인덱스를 저장할 스택 -> 인덱스를 0부터 시작하기 때문에 마지막에 for문으로 다 돌려도 값이 다 나옴 

//배열의 순서는 i가 지켜주고 ret은 오큰수만 저장
int main(){
	cin >> n; 
	fill(&ret[0], &ret[1000004], -1);
	for(int i = 0; i < n; i++){
    cin >> a[i]; // 숫자 입력 받기
	    while(s.size() && a[s.top()] < a[i]){ 
	        ret[s.top()] = a[i];  // 현재 스택의 top이 가리키는 인덱스의 오큰수는 a[i] -> 값 저장 
	        s.pop(); // 찾았으므로 스택에서 제거 -> 인덱스 제거  
	    }
	    s.push(i);  // 현재 숫자의 인덱스를 스택에 저장	
	}

	for(int i = 0; i < n; i++) cout << ret[i] << " ";  
} 

