#include <bits/stdc++.h>
using namespace std;
//이 문제는 경우의 수이다. 경우의 수는 곱하기 
int main(){
	int t, n;
	string a,b; 
	cin>>t;
	for(int i=0; i<t; i++){
	map<string, int>mp; //아이템 이름은 필요 없다. 이걸 카운트만 해주면 된다->int  
	//map이 반복문 안에 들어온 이유는 각 테스트 케이스마다 새로운 데이터를 처리해야하기 때문. 
		cin>>n;
		for(int j=0; j<n; j++){
			cin>>a>>b;
			mp[b]++; //필요한 건 이름이 아닌 종류 
		}
		long long ret=1; //경우의 수는 연산이 많을 수 있기 때문에 long long으로 선언
		for(auto c : mp){
			ret*=((long long)c.second+1);//종류마다 아무것도 안입는 경우 +1, 경우의 수는 다 곱해야한다. 
		} 
		ret--; //모든 종류의 옷을  아무것도 안입는 경우 
		cout<<ret<<'\n';
	}
} 