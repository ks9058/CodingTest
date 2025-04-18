#include <iostream>
using namespace std;
int n;
int ret;
// 자릿수를 연산자로 쉽게 계산 
int main() {
	cin>>n;
	int original=n;
	
    //최소 사이클을 한 번은 수행해봐야하니 do while문 사용
	do{
		int ten=n/10;
		int one=n%10;
		int hap=ten+one;
		
		n=(one*10)+(hap%10);
		
		ret++;
	}while(original!=n);
	
	cout<<ret;
    return 0;
}
