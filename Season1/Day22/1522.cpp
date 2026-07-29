#include <bits/stdc++.h>
using namespace std;
//접근 방법
//1. 문자열에서 a가 몇개인지 센다 -> a의 개수가 연속된 문자의 수이다.
//2. 문자열에서 연속된 문자의 수(a의 개수)에서 옆으로 이동하면서 b가 최소한으로 포함된 것을 찾는다. -> 슬라이딩 윈도우를 사용하여 한번의 순회만으로 값을 빠르게 찾을 수 있다.
//3. 앞뒤가 붙어있다고 가정한것은 문자열을 한 번 더 뒤에 가져다 붙여서 생각 -> 문자열이 똑같은 게 한번더 붙는것이니 최소 연산이 앞뒤가 붙는 부분만 달라지기 때문에 가능 

int a, b ,swap_b;
string s;

int main() {
    cin >> s;

   for(char c:s){
		if(c=='a') a++;
   }
   
   int n=s.size();
   s+=s;
   
	for(int i=0; i<a; i++){
		if(s[i]=='b') b++;
	}
	swap_b=b;
	
	for(int i=1; i<n; i++){
		if(s[i-1]=='b') b--;
		if(s[i+a-1]=='b') b++;
		
		swap_b = min(swap_b, b);
	}
	cout<<swap_b;
    return 0;
}
