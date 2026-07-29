#include <bits/stdc++.h>
using namespace std;

int a, b, c, ret;
int t[104];
int main(){
	cin>>a>>b>>c;
	
	for(int i=0; i<3; i++){
		int sta, ed;
		cin>>sta>>ed;
		for(int j=sta; j<ed; j++){
			t[j]++;
		}
	}
	
	for(auto k:t){
		if(k==1){
			ret+=a;
		}else if(k==2){
			ret+=2*b;
		}else if(k==3){
			ret+=k*c;
		}
	}
	cout<<ret;
	return 0;
}