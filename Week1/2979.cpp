#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	int time[101]={0,};
	int arrive;
	int leave;
	
	cin>>a>>b>>c;
	for(int i=0; i<3; i++){
		cin>> arrive>>leave;
		while(arrive<leave){//시간은 이상 미만으로 계산
			time[arrive]++;
			arrive++;
		}
	}
	arrive=0;//재사용 
	for(int i=0; i<=100; i++){
		if(time[i]){
		if(time[i]==3) arrive=arrive+(time[i]*c);
		else if(time[i]==2)arrive=arrive+(time[i]*b);
		else if(time[i]==1)arrive=arrive+a;
		}
	}
	cout<<arrive;
	return 0;
}