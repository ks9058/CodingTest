#include <bits/stdc++.h>
using namespace std;
vector<int> v(9);
int num;
int main(){
	for(int i=0; i<9; i++){
		cin>>v[i];
		num+=v[i];
	}
	sort(v.begin(), v.end());
	
	for(int i=0; i<9; i++){
		for(int j=0; j<i; j++){
			if(num-v[i]-v[j]==100){
				for(int o=0; o<9; o++){
					if(o !=i && o!=j ) cout<<v[o]<<'\n';
				}
				return 0;
			}
		}
	}
	return 0;
}