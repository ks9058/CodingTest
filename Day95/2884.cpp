#include <bits/stdc++.h>
using namespace std;
int h, m;

int main(){
	cin>>h>>m;
	
	if(h<1&&m<45){
		h=23;
		m+=60;
	} 
	m-=45;
	m+=h*60;
	
	cout<< m/60<<' '<<m%60;		
	return 0;
}