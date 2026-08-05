#include <bits/stdc++.h>
using namespace std;


char a[70][70];
int n;


void go(int n, int y, int x){

	char check=a[y][x];
	int cnt=0; 
	for(int i=y; i<y+n; i++){
		for(int j=x; j<x+n; j++){
			if(check!=a[i][j]){
				cnt++;	
			}
		}
	}
	if(cnt>=1){
		cout<<'(';
		//왼쪽 위 
		go(n/2, y, x);
		
		//오른쪽 위
		go(n/2, y, x+(n/2));
		
		//왼쪽 아래
		go(n/2, y+(n/2), x);
				
		//오른쪽 아래 
		go(n/2, y+(n/2), x+(n/2));
		
		cout<<')';
	}else if(cnt==0 && check=='1'){
		cout<<"1";
	}else if(cnt==0 &&check=='0'){
		cout<<"0";
	}
	
}

int main(){
	cin>>n;
	string s;
    for(int i = 0; i < n; i++){
        cin >> s; 
        for(int j = 0; j < n; j++){
            a[i][j] = s[j];
        }
    }
	
	go(n, 0, 0);
		
	return 0;
}