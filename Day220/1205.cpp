#include <bits/stdc++.h>
using namespace std;
int n,s,p;
int main(){
	cin>>n>>s>>p;
	vector<int> score(p);
	for(int i=0; i<n; i++) cin>>score[i];
	
 	if (n == 0) {  // 랭킹이 비어 있는 경우
        cout << 1;
        return 0;
    }
    
	int rank=1;
	
	for(int i=0; i<n; i++){
		if(score[i]>s) rank++;
		else break;
	}
	// 만약 이미 리스트가 꽉 찼고, 마지막 점수보다 낮거나 같으면 진입 불가
	if (n == p && s <= score.back()) cout << -1;
	else cout<<rank;
	
	return 0;
}


