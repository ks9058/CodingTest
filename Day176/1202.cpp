#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k; 
	cin>>n>>k;
	vector<pair<int, int>> jewel(n);
	vector<int> bag(k);
	for(int i=0; i<n; i++){
		cin>>jewel[i].first>>jewel[i].second;	
	}	
	
	for(int i=0; i<k; i++){
		cin>>bag[i];
	}
	sort(jewel.begin(), jewel.end()); //무게 기준 오름차순 정렬 
	sort(bag.begin(), bag.end()); //가방 용량 오름차순 
	
	priority_queue<int> pq; // 가치 max heap
    long long ret = 0;
    int idx = 0;
	
	//가장 작은 가방 부터 시작 
	for(int i=0;i<k;i++){
		
		//해당 가방에 담을 수 있는 보석(가격만)들을 우선순위 큐에 넣음 
        while(idx < n && jewel[idx].first <= bag[i]){
            pq.push(jewel[idx].second);
            idx++;
        }
        
        //보석들의 가치들중 가장 큰 것을 결과값에 더함 
        //보석들을 계속 담아도 되는 이유는 가장 큰 값만 사용하기 때문 
		if(!pq.empty()){
            ret += pq.top();
            pq.pop();
        }
    }
	
	cout<<ret;
	return 0;
}