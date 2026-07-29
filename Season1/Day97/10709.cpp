#include <bits/stdc++.h>
using namespace std;

int w, h;
int arr[104][104];
int main(){
	fill(&arr[0][0],&arr[103][104],-1);
	cin>>h>>w;
	
	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			char a;
			cin>>a;
			if(a=='c') arr[i][j]=0;
		}
	}
	
	for(int i=0; i<h; i++){
		int num=1;
		int check=0;
		for(int j=0; j<w; j++){
			if(arr[i][j]==0){
				arr[i][j]=0;
				num=1;	
				check=1;
			}else if(check==1){
				arr[i][j]=num;
				num++;
			} 	
		}
	}
	
	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			cout<<arr[i][j]<<' ';
		}
		cout<<'\n';
	}
	return 0;
}