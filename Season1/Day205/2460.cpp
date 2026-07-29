#include <bits/stdc++.h>
using namespace std;
int person;
int ret;
int main(){
	for(int i=0; i<10; i++){
		int in, out;
		cin>>out>>in;
		person-=out;
		person+=in;
		ret=max(person, ret);
	}	
	cout<<ret;
	return 0;
}