#include <bits/stdc++.h>
using namespace std;

int arr[26];
string str;

int main(){
	fill(&arr[0], &arr[26], -1);
	
	cin>>str;
	for(int i=0; i<str.size(); i++){
		if(arr[str[i]-'a'] == -1) arr[str[i]-'a'] = i;
	}
	for(int i:arr){
		cout<<i<<' ';
	}
	return 0;
}