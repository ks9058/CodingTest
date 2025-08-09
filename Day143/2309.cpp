#include <bits/stdc++.h>
using namespace std;
int arr[9];
int main(){
	for(int i=0;i<9; i++) cin>>arr[i];
	
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			if(i==j) continue;
			
			vector<int> v;
			int total=0;
			
			for(int k=0; k<9; k++){
				if(k==i||k==j)continue;
				v.push_back(arr[k]);
				total+=arr[k];
			}
			if(total==100){
				sort(v.begin(), v.end());
				for(auto a:v) cout<<a<<'\n';
				return 0;
			}
		}
	}
	return 0;
}