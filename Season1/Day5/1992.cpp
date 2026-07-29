#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;     
int n; 
string s;   
char a[101][101];

//분할정복은 재귀함수로 문제를 쪼개서 해결
string quard(int y, int x, int size){
    if(size == 1) return string(1, a[y][x]); //기저사례 충족 시 1개의 a[y][x] 생성
    char b = a[y][x]; 
    string ret = "";  
    for(int i = y; i < y + size; i++){
        for(int j = x; j < x + size; j++){ 
            if(b != a[i][j]){ 
                ret += '(';
                ret += quard(y, x, size / 2); //왼쪽 위 
                ret += quard(y, x + size / 2, size / 2); //오른쪽 위 
                ret += quard(y + size / 2, x, size / 2); // 왼쪽 아래 
                ret += quard(y + size / 2, x + size / 2, size / 2); //오른쪽 아래 
                ret += ')';
                return ret;  
            }
        } 
    }
    return string(1, a[y][x]); 
}
int main(){
    cin.tie(NULL);
    cin >> n; 
    for(int i = 0; i < n; i++){
        cin >> s; 
        for(int j = 0; j < n; j++){
            a[i][j] = s[j];
        }
    }
    cout << quard(0, 0, n) << '\n'; 
	return 0; 
}