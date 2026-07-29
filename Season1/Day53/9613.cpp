#include <bits/stdc++.h>
using namespace std;

//내가 구현한 gcd는 a>b만족 하지 않아도 됨 -> '조합' 사용가능 
//while문 처음 연산에서 a와 b가 뒤바뀌면서 작동
// a=3, b=10일때
// 	r=a%b -> 3=3%10(r이 3이 됨)
// 	a=b ->a가10이됨 
//	b=r ->b가 3이됨 
int gcd(int a, int b){
	while(b!=0){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main(){
	int t=0;
	cin>>t;
	while(t--){
		int n=0;
		vector<int>arr;
		cin>>n;
		for(int i=0; i<n; i++){
			int num=0;
			cin>>num;
			arr.push_back(num);
		}
		//시간 복잡도만 생각하고 공간복잡도를 생각안해서 계속 틀렸음 
		//n이 1,000,000이하 라서 999,999가 999,998과 같이 큰 수가 여러개 들어오면 큰 타입이 필요 
		long long total=0;
		for(int i=0; i<n; i++){
			for(int j=0; j<i; j++){
				total=total+gcd(arr[i], arr[j]);
			}
		}	
		cout<<total<<'\n';	
	}
	return 0;
}