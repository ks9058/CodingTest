#include <bits/stdc++.h>
using namespace std;

int n;
int sum;
int mn=4001;
int mx=-4001;
int bin;
bool check=0;
	
vector<int> v;
vector<int> ret;
map <int, int> mp;

int main(){
	cin>>n;
	
	for(int i=0; i<n; i++){
		int num=0;
		cin>>num;
		mp[num]++;
		sum+=num;
		v.push_back(num);
		
		mn=min(num,mn);	
		mx=max(num,mx);
	}
	sort(v.begin(), v.end());
	
	for(auto a:mp){
		if(a.second>bin) bin=a.second;			
	}
	
	for(auto a:mp){
		if(bin==a.second) ret.push_back(a.first);	
	}
	
	
	//산술평균 
	double ret1=(double)sum/n; //형변환 해줘야지 값이 들어감 
	cout<<(int)round(ret1)<<'\n'; //형변환 해주면 -0.0이 0으로 바뀜 
	
	//중앙값 
	cout<<v[n/2]<<'\n';
	
	//최빈값 
	if(ret.size()==1) cout<<ret[0]<<'\n';
	else{
		sort(ret.begin(),ret.end());
		cout<<ret[1]<<'\n';
	}
	
	//범위 
	cout<<mx-mn<<'\n';
	return 0;
}