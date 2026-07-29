#include <bits/stdc++.h>
using namespace std;

int s_money,j_money;
int s_stock,j_stock;
int check_raise;
int check_dawn;
int stock;
int yesterday;
int main(){
	cin>>s_money;
	j_money=s_money;
	for(int i=0; i<14; i++){
		cin>>stock;
		//성민 BNP 
		if(s_money>=stock){
			s_stock=s_stock+(s_money/stock);
			s_money=s_money%stock;
		}
		//준현 TIMING
		if(i>0&&yesterday<stock){
			check_raise++;
		 	check_dawn=0;
		}
		else if(i>0&&yesterday>stock){
			check_dawn++;
			check_raise=0;	
		} 
		else{
			check_raise=0;
			check_dawn=0;
		}
		
		if(check_raise==3&&j_stock>0){
			j_money=j_money+(j_stock*stock);
			j_stock=0;
		} 
		if(check_dawn==3&&j_money>=stock){
			j_stock=j_stock+(j_money/stock);
			j_money=j_money%stock;
		}
		yesterday=stock;
	}
	j_money=j_money+(j_stock*stock);
	s_money=s_money+(s_stock*stock);

	if(j_money<s_money) cout<<"BNP";
	else if(j_money>s_money) cout<<"TIMING";
	else cout<<"SAMESAME";
	return 0;
}