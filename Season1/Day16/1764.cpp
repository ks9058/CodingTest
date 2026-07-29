#include <bits/stdc++.h>
using namespace std;

int n,m,cnt;
map<string, int> mp;
set<string> st; //set을 사용하여 자동 정렬 

int main(){
	cin>> n >> m;
		
	for(int i=0; i<n+m; i++){
		string arr;
		cin>>arr;
		mp[arr]++;
		st.insert(arr);
		if(mp[arr]==2) cnt++;
	}
	
	cout<<cnt<<'\n';
	
	for(string s : st){
		if(mp[s]==2) cout<<s<<'\n';
	}
			
	return 0;
}

/*
아래와 같은 풀이도 가능 -> set으로 듣도 못한 사람 먼저 저장하고 보도 못한 사람을 입력받으면서 있으면 결과 벡터에 저장, 벡터는 sort로 정렬렬

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    set<string> unheard;  // 듣도 못한 사람 저장
    vector<string> result;  // 결과를 저장할 벡터

    // 듣도 못한 사람 저장
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        unheard.insert(name);
    }

    // 보도 못한 사람을 입력받고, 듣도 못한 사람과 겹치면 결과 벡터에 추가
    for (int i = 0; i < m; i++) {
        string name;
        cin >> name;
        if (unheard.find(name) != unheard.end()) {
            result.push_back(name);
        }
    }

    // 사전순 정렬
    sort(result.begin(), result.end());

    // 결과 출력
    cout << result.size() << '\n';
    for (const string &name : result) {
        cout << name << '\n';
    }

    return 0;
}
*/ 
