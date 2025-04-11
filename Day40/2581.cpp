#include <bits/stdc++.h>
using namespace std;
int n,m,ret_sum, ret;
bool check;

bool isPrime(int n){
	if(n==1) return false;
	if(n==2) return true;
	//소수 판단할때 <=까지 잘 써야함 < 이것만 쓰면 3을 검사하지 않아서 9를 소수로 판단함 
	for(int i=2; i*i<=n; i++){
		if(n%i==0) return false; 
	}
	return true;
}

int main(){
	cin>>n;
	cin>>m;
	
	for(int i=n; i<=m; i++){
		if(isPrime(i)){
			ret_sum+=i;
			if(check==0){
				ret=i;
				check=1;
			}
		}  
	}
	if(ret_sum) cout<<ret_sum<<'\n'<<ret;
	else cout<<"-1";
	return 0;
}