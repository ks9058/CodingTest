#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<string> v;
unordered_map<string, int>mp; // 맵 자체가 정렬이 필요없고 빠른 검색이 필요하면  unordered_map 사용
                            // unorderd_map은 정렬을 하지 않기 때문에 O(1)이라는 시간 복잡도를 가진다. 

// 원래 내 코드 
bool cmp(string first, string second){
    if(mp[first]>mp[second]) return true;
    else if(mp[first]==mp[second]){
        if(first.size()>second.size()) return true;
        else if(first.size()==second.size()){
            if(first<second) return true;
        }
    }
    return false;
}

/* 보기 좋게 만든 코드 
bool cmp(const string &a, const string &b) {
// 1. 단어 등장 빈도 기준 내림차순 정렬
if (mp[a] != mp[b]) 
    return mp[a] > mp[b];

// 2. 단어 길이 기준 내림차순 정렬
if (a.size() != b.size()) 
    return a.size() > b.size();

// 3. 사전순 정렬 (오름차순)
return a < b;
}
*/
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin>> n>>m;
    
    for(int i=0; i<n; i++){
        string str;
        cin>>str;
        if(str.size()>=m){
            mp[str]++;
            if(mp[str]==1) v.push_back(str);  	
        }	
    }
    sort(v.begin(), v.end(), cmp);
    for(string s:v) cout<<s<<'\n';
    return 0;
}