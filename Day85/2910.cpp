#include <bits/stdc++.h>
using namespace std;
// 빈도 정렬은 컴패어 함수 정의해서 정렬
unordered_map<int, int> mp;
unordered_map<int, int> order;
vector<pair<int, int>> v;
int n,c;
int main(){
	
	cin>>n>>c;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		mp[a]++;
		if(order[a]==0) order[a]+=i+1;
	}	
	
	for(auto a: mp){
		v.push_back({a.first,a.second});
	}
	
	 sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
        if (a.second != b.second)
            return a.second > b.second;  // 빈도 내림차순
        return order[a.first] < order[b.first];  // 입력 순 오름차순
    });
	
	for(auto a: v){
		for(int i=0; i<a.second; i++){
			cout<<a.first<<' ';
		}
	}
	return 0;
}