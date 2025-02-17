//이 문제를 보고 커스텀 비교함수가 생각나야함-> 1순위는 카운팅이 많은 순서, 2순위는 먼저 나온 순서 -> 이 두가지를 pair해서 담아야 함 
#include <bits/stdc++.h>
using namespace std;  

int n, c, a;
vector<pair<int, int>> v; //v : 최종 정렬된 데이터를 저장하는 벡터. (등장 횟수, 숫자) 형태로 저장됨. 즉, {mp[a], a} 형식.
map<int, int> mp; // mp : 숫자가 몇 번 등장했는지를 저장하는 맵. (숫자 -> 등장 횟수)
map<int, int> mp_first; //mp_first : 해당 숫자가 처음 등장한 위치를 저장하는 맵. (숫자 -> 처음 등장한 인덱스) 값을 할당 

bool cmp(pair<int,int> a, pair<int, int> b){
	if(a.first == b.first){
		return mp_first[a.second] < mp_first[b.second]; //우선순위 2: 등장 횟수가 같다면 먼저 등장한 숫자가 앞에 오도록 정렬.
	}
	return a.first > b.first; //우선순위 1: 등장 횟수가 많은 숫자가 앞으로 오도록 a.first > b.first
}

int main(){
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> c; 
	
	
	for(int i = 0; i < n; i++){
		cin >> a;
		mp[a]++; //a의 개수 카운팅 
		 
		//mp_first[a] 를 이용해 해당 숫자가 처음 등장한 위치를 저장.
		if(mp_first[a] == 0) mp_first[a] = i + 1; //i 는 0부터 시작하므로, 1을 더해서 저장)
		// 첫 번째 등장 인덱스가 0일 수도 있기 때문에 이를 아직 등장 안 한 숫자와 구분할 방법이 필요
	} 
	
	//mp (숫자별 등장 횟수)를 이용해 v 벡터에 (등장 횟수, 숫자) 쌍을 저장.
	//이때 mp_first는 벡터 v에 직접 들어가는 게 아님!
	//벡터는 단순히 (등장 횟수, 숫자 값)만 저장하고 있음.
	for(auto it : mp){
		v.push_back({it.second, it.first});
	}
	
	//정렬 
	sort(v.begin(), v.end(), cmp);
	
	//출력 
	for(auto i : v){
		for(int j = 0; j < i.first; j++){
			cout << i.second << " ";
		}
	} 
	 
	return 0;
}
