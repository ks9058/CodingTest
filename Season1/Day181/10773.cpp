#include <bits/stdc++.h>
using namespace std;
stack<int>st;
int n;

int main(){
	cin>>n;
	
	for(int i=0; i<n; i++){
		int num=0;
		cin>>num;
		
		if(num==0){
			st.pop();
		}else{
			st.push(num);
		}
	}
	
	int ret=0;
	 
    while (!st.empty()) {
        ret += st.top();
        st.pop();
    }
	cout<<ret;
	return 0;
}