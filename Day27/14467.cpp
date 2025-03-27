#include <bits/stdc++.h>
using namespace std;

int N;
int cow[11]; // 소의 위치 
int num, check;
int ret;
int main(){
	//배열 초기화 -> 소의 처음 위치를 알기 위함 
	fill(&cow[0], &cow[11], -1);

	cin>>N;
	for(int i=0; i<N; i++){
		cin>>num>>check;
		if(cow[num]!=-1&&check!=cow[num]){
		ret++; // 소가 이동했으면 결과값 증가 
		}
		cow[num]=check;	 //소의 위치 저장 
	}
	cout<<ret;
	return 0;
}