#include<bits/stdc++.h>
using namespace std;
int n, r, temp, root;
vector<int> adj[54]; // vector로 구현 
//리프 노드 수 구하는 함수 
int dfs(int here){
    int ret = 0;
    int child = 0;
    for(int there : adj[here]){
        if(there == r) continue; //지울 노드와 같으면 탐색하지 않음 
        ret += dfs(there);
        child++;
    }
    if(child == 0) return 1; //자식 없으면 리프노드인 자신 반환 
    return ret;
}
int main(){
    cin.tie(NULL); 
	cout.tie(NULL);
    
	cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp == -1) root = i;
        else adj[temp].push_back(i); //연결되어지는 값을 리스트에 저장, temp는 부보 노드를 가리킴 
    }
    cin >> r; //지울 노드 번호 
    if(r == root){
        cout << 0 << "\n";
		return 0;
    }
    cout << dfs(root) << "\n";
    return 0;
}
