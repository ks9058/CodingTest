#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	vector<string> v(n);
	string ret="";
	int idx1=0,idx2=0;
	
	for(int i=0; i<n; i++){
		cin>>v[i];
		if("KBS1"==v[i]) idx1=i;		
		if("KBS2"==v[i]) idx2=i;
	}
	
	int i=0;
	while(1){
		if(v[0]=="KBS1") break;
		
		if(v[i]!="KBS1"){
			i++;
			ret+="1";
		}else if(v[i]=="KBS1" && i>0){ //범위 넘어가는 명령은 무시 
			string temp=v[i];
			v[i]=v[i-1];
			v[i-1]=temp;
			i--;
			ret+="4";
		}
	}
	
    //KBS1이 KBS2보다 밑에 있었다면 올리는 과정에서 KBS2가 한 칸 더 밀렸기 때문에 커서를 한 칸 밑으로 이동
	if(idx1>idx2){
		i++;
		ret+="1";
	}
	
	while(1){
		if(v[1]=="KBS2") break;
		
		if(v[i]!="KBS2"){
			i++;
			ret+="1";
		}else if(v[i]=="KBS2" && i>0){ //범위 넘어가는 명령은 무시
			string temp=v[i];
			v[i]=v[i-1];
			v[i-1]=temp;
			i--;
			ret+="4";
		}
	}
	
	cout<<ret;
	return 0;
}