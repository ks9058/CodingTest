#include <bits/stdc++.h>
using namespace std;

vector <int> v;
int sum=0;
int main(){
	for(int i=0; i<9; i++){
		int k=0;
		cin>>k;
		v.push_back(k);
		sum+=k;
	}	
	sort(v.begin(), v.end());
    //조합 부분 두 가지 형태로 구현 가능
    //for 문과 재귀함수 
	for(int i=0; i<9; i++){
		for(int j=0; j<i; j++){
			if(sum-v[i]-v[j]==100){
				for(int k:v){
					if(k==v[i]||k==v[j]) continue;
					cout<<k<<'\n';
				}
				return 0;
			}
		}
	}
	return 0;
}