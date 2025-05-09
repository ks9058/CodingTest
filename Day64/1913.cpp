#include <bits/stdc++.h>
using namespace std; 

int dy[]={1, 0, -1, 0};
int dx[]={0, 1, 0, -1};
int temp;
int x,y, ret_x,ret_y;
int arr[1000][1000];
int n, num,k;
int n_temp;

int main(){
	cin>>n;
	cin>>num;
	
	temp=n*n;
	for(int i=n; 0<i; i--){
		if(i!=n){
		x=x+dx[k];
		y=y+dy[k];	
		}
		arr[y][x]=temp;
		if(temp==num){
			ret_x=x; 
			ret_y=y;	
			}
		temp--;
		
	}
	k++;
	n_temp=n-1;
	while(temp>0){
		for(int j=0; j< 2; j++){
			for(int i=0; i<n_temp; i++){
                x=x+dx[k];
                y=y+dy[k];				
                    
                arr[y][x]=temp;
                
                if(temp==num){
                    ret_x=x; 
                    ret_y=y;	
                }
                
                temp--;
			}
			k=(k+1)%4;
		}
		n_temp--;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<arr[i][j]<<' '; 
		}
		cout<<'\n';
	}
	cout<<ret_y+1<<' '<<ret_x+1;
	return 0;
}