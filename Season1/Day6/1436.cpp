/*
1. 첫번째로 무식하게 푼다는 생각
2. 시간 복잡도가 가능하면 그렇게 구현
3. 해당 문제는 가능 
4. 문제의 최대 범위가 n=10000이기 때문에 단순히  for문을 증가시켜서 i값을 찾아도 6,660,000이라는 수가 나옴 보통은 1000만 이하면 가능  
*/

#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	int i=666;
	//무한루프 
	for(;;i++){
		//string::npos 가 아니면 있다는 뜻 
		if(to_string(i).find("666") != string::npos) n--; //666이 있다면 n--값을 감소 
		if(n==0) break;// n==0이면 해당 n번째의 i값이 나온다. 
	}
	cout<<i;
	return 0;
} 