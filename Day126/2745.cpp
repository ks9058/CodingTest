#include <bits/stdc++.h>
using namespace std;

int n; string num;
long long ret;
int main(){
	cin>>num>> n;
	int base=1;
	//n진법 -> 10진법 
	for(int i=num.size()-1; i>=0; i--){
		if('A'<=num[i]&&num[i]<='Z'){
			ret+=(num[i]-'A'+10)*(base);
			
		}else{
			ret+=(num[i]-'0')*(base);
		}
		base*=n;
	}
	cout<<ret;
	return 0;
}