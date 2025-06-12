#include <bits/stdc++.h>
using namespace std;
map <long long, long long> mp;
vector<long long> v;
long long n,c;

bool cmp(int a, int b){
	if(mp[a]<mp[b]) return 0;
	else if(mp[a]>mp[b]) return 1;
	else return 0;
}

int main(){
	cin>>n>>c;
	for(int i=0; i<n; i++){
		cin>>c;
		mp[c]++;
		if(mp[c]==1) v.push_back(c);
	}	
	
	stable_sort(v.begin(), v.end(), cmp); //정렬에서 같은 우선순위일때 입력 순서를 보장하고 싶다면 사용 
	
	for(int a: v){
		for(int i=0; i<mp[a]; i++){
			cout<<a<<" ";
		}
	}	
	return 0;
}