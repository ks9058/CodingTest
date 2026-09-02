#include <bits/stdc++.h>
using namespace std;
int n,x, ret;
vector<int> v;
int main(){
	cin>>n;
	for(int i=0; i< n; i++ ){
		int num;
		cin>> num;
		v.push_back(num);
	}	
	cin>>x;
	
	sort(v.begin(), v.end());
	
	int l=0;
	int r=v.size()-1;
	
	
	while(l<r){
		
		if(x-v[l] < v[r]){
			r--;
		}else if(x-v[l] == v[r]){
			r--;
			ret++;
		}else{
			l++;
		}
		
	}
	
	cout<<ret;
	return 0;
}