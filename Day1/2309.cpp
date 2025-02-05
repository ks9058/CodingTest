#include <bits/stdc++.h>
using namespace std;

int N=9;
int k=7;
int a[9];
vector<int> heights;



void combi(int start, vector<int>&b){
	if(b.size()==k){
		int total=0;
		for(int i:b) {
		total=total+a[i];
		} 
		if(total==100) 
		{
			for(int i:b)cout<<a[i]<<"\n";
			exit(0);
		}
		return;
	}
	for(int i=start+1; i<N; i++){
	b.push_back(i);
	combi(i,b);
	b.pop_back();	
	}
	return;
}

int main(){
	for(int i=0; i<9; i++){
		cin>>a[i];
	}
	sort(a,a+9);	
	combi(-1,heights);
	
	return 0;
}