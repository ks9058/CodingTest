#include <bits/stdc++.h>
using namespace std;
int T;

bool isPrime(long long n){
    if(n<2) return false;
    if(n==2||n==3) return true;
    if(n%2==0||n%3==0) return false;
     
    for(long long i=5; i*i<=n; i+=6){
        if(n%i==0||n%(i+2)==0) return false; //6k-1 또는6k+1 
    }
    return true;
}


int main(){
	cin.tie(NULL);
	cin>>T;
	
	while(T--){
        long long num;
        cin>>num;
        while(true){
            if(isPrime(num)){
                cout << num << '\n';
                break;
            }
            num++;
        }
    }
    return 0;
}