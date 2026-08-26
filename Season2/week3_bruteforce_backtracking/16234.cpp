#include <bits/stdc++.h>
using namespace std;


int n, l, r, cnt, sum, ret;
int a[54][54];
int temp[54][54];
int visited[54][54];

int dy[]={-1, 0 ,1, 0};
int dx[]={0, 1, 0, -1};

vector<pair<int, int>> v;

void dfs(int y, int x){
	
	visited[y][x]=1;
	v.push_back({y,x});
	cnt++;
	sum+=a[y][x];
	


	for(int i=0; i<4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		
		if(ny < 0 || nx < 0 || ny>= n || nx >= n) continue;
		if(visited[ny][nx]) continue;
		int p = abs(a[y][x]-a[ny][nx]);
		if(p<l || p > r) continue; 				
		
			
		dfs(ny, nx);
	}
	
}

int main(){
	cin>>n>>l>>r;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}	

	while(1){
	    fill(&visited[0][0], &visited[0][0] + 54 * 54, 0);
        bool moved = false; // 오늘 인구 이동 발생 여부
        
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				
				if(visited[i][j]==0){
					v.clear();
					sum=0;
					cnt=0;
					
					dfs(i, j);  
						
			
					
					if (v.size() > 1) {
                        moved = true;
                        int avg = sum / cnt;
                        for (auto k : v) {
                            a[k.first][k.second] = avg;
                        }
					}
				}
					
			}
		}
		
		if (!moved) break;
		
		ret++;
	}		


	
	cout<<ret;
	
	return 0;
}