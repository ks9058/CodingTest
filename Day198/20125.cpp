#include <bits/stdc++.h>
using namespace std;
int n;
int heart_i, heart_j, l_hand, waist, r_hand, l_leg, r_leg;
char arr[1004][1004];

int main(){
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>arr[i][j];
				
			//머리 찾기 
			if(heart_i <1 &&arr[i][j]=='*'){
				//심장 위치 저장 
				heart_i = i+1;
				heart_j = j;		  
			}
		}
	}
    //심장 찾은 후 각 부위 길이 셀 수 있음 -> 한 반복문 안에 안됨
	
	//왼쪽 팔 길이 세기
	for(int j=heart_j-1; j>0; j--){ 
		if(arr[heart_i][j]=='*') l_hand++;
		else break;	
	}	
	
	//오른쪽 팔 길이 세기
	for(int j=heart_j+1; j<=n; j++){ 
		if(arr[heart_i][j]=='*') r_hand++;
		else break;	
	}		
	
	//허리 길이 세기
	for(int i=heart_i+1; i<=n; i++){ 
		if(arr[i][heart_j]=='*') waist++;
		else break;	
	}		
	
	//왼쪽 다리 길이 세기 
	for(int i=heart_i+waist+1; i<=n; i++){ 
		if(arr[i][heart_j-1]=='*') l_leg++;
		else break;	
	}	
	
	//오른쪽 다리 길이 세기 
	for(int i=heart_i+waist+1; i<=n; i++){ 
		if(arr[i][heart_j+1]=='*') r_leg++;
		else break;	
	}	
			
	cout<<heart_i<<' '<<heart_j<<'\n';
	cout<<l_hand<<' '<<r_hand<<' '<<waist<<' '<<l_leg<<' '<<r_leg;
	return 0;
}