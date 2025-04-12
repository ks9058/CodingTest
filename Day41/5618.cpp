#include <bits/stdc++.h>
using namespace std;
int arr[3];
int n;

 //gcd - 최대공약수 
int gcd(int a, int b){
	//유클리드 호재법 a % b = r 이면, GCD(a, b) = GCD(b, r) (단 a>=b)
	//이 공식을 이용해서 b를 a로 만들고 r을 b로 만들어서 나머지가 0일때 b가 a, b의  최대공약수가 된다. 
	//gcd(a,b)=gcd(b,r1) -> gcd(b,r1)=gcd(r1,r2) 이런식으로 계속 같게 됨 
	//여기서 a>=b 라는 조건이 있는데 이 코드에서는 b를 a로 만들기 때문에 상관없다.
	//12 % 48 = 12 → 다음은 gcd(48, 12)
	//이후 자연스럽게 큰 값이 앞으로 가게 됨
	while(b != 0){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main() {

    cin >> n;
	for(int i=0; i<n; i++) cin>>arr[i];
	
	//유클리드 호재법 
	int g = arr[0];
	for(int i=1; i<n; i++){
		//최대공약수를 2<n 개를 구할 수 있게 함 
		//gcd(a, b, c) = gcd(gcd(a, b), c)
		g = gcd(g, arr[i]); 	
	}

	//최대공약수의 약수 구하기 
    vector<int>ret;
	for (int i = 1; i * i <= g; i++) {
	    if (g % i == 0) {
	        ret.push_back(i);
	        //대칭 약수 추가 
	        if (i != g / i) ret.push_back(g/i);
	    }
	}
	//순서 맞춰서 출력 
	sort(ret.begin(), ret.end());
	for(int k:ret) cout<<k<<'\n';
	return 0;
}
