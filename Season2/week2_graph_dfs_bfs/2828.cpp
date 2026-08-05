#include <bits/stdc++.h>
using namespace std;

int n,m,j;
int ret;

int main(){
	cin>>m>>n;
	cin>>j;
	
	int start=1;
	int last=n;

	for(int i=0; i<j; i++){
		int move=0;
		int num=0;
		
		cin>>num;
		if(num>last){
			move=num-last;
			
			last+=move;
			start+=move;
			ret+=move;
		}else if(num<start){
			move=start-num;
			
			last-=move;
			start-=move;
			ret+=move;
			
		}
		
	}
	cout<<ret;
	return 0;
}