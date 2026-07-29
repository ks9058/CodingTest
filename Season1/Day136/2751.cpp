#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v;
int main(){
	cin>>n;
	
	for(int i=0; i<n; i++){
		int num;
		cin>>num;
		v.push_back(num);
	}	
	
	sort(v.begin(), v.end());
	
	for(auto a:v){
		cout<<a<<'\n';
	}
	return 0;
}