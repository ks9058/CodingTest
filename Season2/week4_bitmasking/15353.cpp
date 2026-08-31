#include <bits/stdc++.h>
using namespace std;

string sa, sb, ret;
int check_a, check_b;

int main(){
	cin>>sa>>sb;
	
	reverse(sa.begin(), sa.end());
	reverse(sb.begin(), sb.end());		
	int carry=0;
	
	int mn=min(sa.size(), sb.size());
	int mx=max(sa.size(), sb.size());
	int i=0;
	
	while(i<mx){
		if(i==mn && mn ==sa.size()) check_a=1;
		else if (i==mn && mn ==sb.size()) check_b=1;
		int a=0;
		int b=0;
		
		if(!check_a) a=sa[i]-'0';
		if(!check_b) b=sb[i]-'0';
		
		int num=a+b+carry;
		
		if(num >= 10){
			ret+=(char)((num%10)+'0');
			carry=1;
		}else{
			ret+=(char)(num+'0');
			carry=0;
		}
		i++;
	}
	if(carry) ret+='1';
	
	reverse(ret.begin(), ret.end());
	cout<<ret;
	
	return 0;
}