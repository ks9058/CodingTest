#include <bits/stdc++.h>
using namespace std;
int x,y, n;
vector<pair<int, int>> person;

int main(){
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>x>>y;
		person.push_back({x,y});
	}
	
	for(int i=0; i<n; i++){
		int rank = 1; // 기본 등수는 1등
		
		for(int j=0; j<n; j++){
			if(i==j) continue; // 자기 자신은 비교 제외
			
			   // i보다 j가 덩치가 더 크다면 rank 증가 -> 덩치가 큰게 아니라면 같은 등수
			if(person[i].first<person[j].first&&person[i].second<person[j].second) rank++;
		}
		cout<<rank<<' ';
	}
	return 0;
}
