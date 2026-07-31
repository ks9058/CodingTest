#include <bits/stdc++.h>
using namespace std;

int n;

int main(){

	while(scanf("%d", &n)!=EOF){
		long long cnt =1, ret =1;
		
		while(true){
			if(cnt % n ==0){
				cout<<ret<<'\n';
				break;
			}else{
				cnt=(cnt*10)+1;
				//여기서 중요한 점은 111...씩 커지는 수가 아니라 자릿수를 구하는 문제이기 때문에 ret만 잘 증가하면됨
				// 나머지 연산을 함으로써 0이 되는 순간을 정확히 추적할 수 있기 때문에 값이 커지지 않도록 방지하기 위해 사용 
				cnt%=n;
				ret++;
			} 
		}
	}
	return 0;
}