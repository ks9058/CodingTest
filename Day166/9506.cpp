#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		if(n==-1) break;
		
		if(n<2){
		cout<<n<<" is NOT perfect.\n";
		continue;	
		} 
		
		vector<int> v;
		v.push_back(1);
		int sum=1;		
			
		for(int i=2; i*i<=n; i++){
			if(n%i==0){
				v.push_back(i);
				sum+=i;
				 if(i!=n/i){ // 제곱근 중복 방지
                    v.push_back(n/i);
                    sum+=n/i;
                }
			}
		}
		
		if(n==sum){
			sort(v.begin(), v.end());
			cout<<n<<" = ";
			for(int i=0; i<v.size(); i++) {
                if(i > 0) cout << " + ";
                cout << v[i];
            }
		cout<<'\n';	
		}
		else{
			cout<<n<<" is NOT perfect.\n";
		}
		
	}
	
	return 0;
}