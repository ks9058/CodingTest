#include <bits/stdc++.h>
using namespace std;
int cnt;
int A[250001];

int MenOfPassion(int A[],int  n) {
	int i = n / 2;
    cnt++;
    return A[i]; 
}

int n;
int main(){
	cin>>n;
	MenOfPassion(A, n);
	cout<<cnt<<'\n';
	cout<<0;
	return 0;
}