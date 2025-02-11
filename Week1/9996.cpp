#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int fc,ec;
	string str;
	string temp;
	
	cin>>n;
	cin>>str;
	fc=str.find('*');
	ec=str.size()-fc-1;//-1은 구분자 크기 

	for(int i=0; i<n; i++){
		cin>>temp;
		if(temp.size()<fc+ec) cout<<"NE"<<"\n";
		else if(temp.substr(0,fc)==str.substr(0,fc)&&temp.substr(temp.size()-ec)==str.substr(str.size()-ec))cout<<"DA"<<"\n"; //복붙하느라 ec대신 fc 넣었는데 이거 찾느라 1시간걸림 복붙도 확인 잘하기
		else cout<<"NE"<<"\n";
	}
	return 0;
}