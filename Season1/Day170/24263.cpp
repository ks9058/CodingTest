#include <bits/stdc++.h>
using namespace std;
int cnt;
int A[500001];
int MenOfPassion(int A[], int n) {
   	int sum = 0;
    for(int i=1; i<=n; i++){
    	cnt++;
        sum = sum + A[i];
	}
    return sum;
}

int n;
int main(){
	cin>>n;
	MenOfPassion(A, n);
	cout<<cnt<<'\n';
	cout<<1;
	return 0;
}