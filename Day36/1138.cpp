#include <bits/stdc++.h>
using namespace std;
int ret[10]={0,};
int arr[10];
int n,k=1;

int main(){
	cin>>n;
	
	for(int i=0; i<n; i++){
	cin>>arr[i];	
	}
	
	for(int i=0; i<10; i++){
		int cnt=arr[i]; 
        for(int j=0; j<10; j++){
			//결과 배열에 값이 있고	
            if(ret[j]==0){

                //입력값만큼 왼쪽에 값이 있어야하니 그 값은 건너뛰기기 
                    if(cnt==0){
						ret[j]=k;
						break;	
					}
					cnt--;
				}
			}
	k++;	
	}
	for(int i=0; i<n; i++){	
		cout<< ret[i]<<' ';
	}
	return 0;
}