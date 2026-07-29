#include <bits/stdc++.h>
using namespace std;
int main(){
	int num, count=0; //count값 꼭 초기화 하기
	int alpha[26];
	fill(&alpha[0],&alpha[26],0);
	string person;
	cin>>num;
	for(int i=0; i<num; i++){
		cin>>person;
		alpha[(int)person[0]-97]++;
	}
	for(int i=0; i<26; i++){
		if(alpha[i]>=5)
		{
		cout<<(char)(i+97);
		count++;
		}
	}
	if(count<1) cout<<"PREDAJA";
}