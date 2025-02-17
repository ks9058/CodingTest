#include <bits/stdc++.h>
using namespace std; 
int n, m, j, l, r, temp, ret;
int main () {
	cin >> n >> m >> j; 
	//처음 l 위치 
	l = 1;  
	for(int i = 0; i < j; i++){
		//두번째로 양끝 위치를 어떻게 정의하는지 생각 
		r = l + m - 1; //r 정의  
		cin >> temp;// 사과의 위치
		
		//첫번째로 바구니의 양끝 위치 사이에 사과의 위치가 들어오는 것을 생각 
		if(temp >= l && temp <= r) continue; //움직이지 않아도 되면 continue 
		else{ 
			if(temp < l){ //사과의 위치가 l 위치보다 작으면 왼쪽으로 이동 해야함 
				ret = ret + (l - temp); //왼쪽으로 이동한 만큼(l-temp) ret값을 증가 
				l = temp;   //l 위치 수정 
			}else{ //사과의 위치가 r 위치보다 작으면 오른쪽으로 이동 해야함
				ret = ret + (temp - r); //오른쪽으로 이동한 만큼(temp-r) ret값을 증가 
				l = l + (temp - r); // l 위치 수정 
				
			}
		} 
	} 
	cout << ret << "\n"; 
	return 0;
}