#include <bits/stdc++.h>
using namespace std;

int main(){
	int charge[3];
	int time [3][100];
	int t1=0, t2=0;
	int total=0;
	fill(&charge[0],&charge[3],0);
	fill(&time[0][0],&time[2][100],0);
	cin>>charge[0]>>charge[1]>>charge[2];
	
	for(int i=0; i<3; i++){
		cin>>t1>>t2;
		for(int change=t1; change<t2; change++){
		time[i][change]=1;
		}
	}
	
	for(int i=1; i<100; i++){
		if(time[0][i]==1 && time[1][i]==1 && time[2][i]==1) 
		{	
			total=total+(charge[2]*3); //한대당 가격이기 때문에에
			continue;
		}
		if((time[0][i]==1&&time[1][i]==1)||(time[0][i]==1&&time[2][i]==1)||(time[1][i]==1&&time[2][i]==1))
		{	
			total=total+(charge[1]*2); //한대당 가격이기 때문에
			continue;
		}
		if(time[0][i]==1||time[1][i]==1||time[2][i]==1) 
		{
			total=total+charge[0];
			continue;
		}
	}
	cout<<total;
	return 0;
}



//아래처럼 더 간략하게 만들기
/*#include <bits/stdc++.h>
using namespace std;

int main(){
	int charge[3];
	int time [100];
	int t1=0, t2=0;
	int total=0;
	fill(&charge[0],&charge[3],0);
	fill(&time[0],&time[100],0);
	cin>>charge[0]>>charge[1]>>charge[2];
	
	for(int i=0; i<3; i++){
		cin>>t1>>t2;
		for(int change=t1; change<t2; change++){
		time[change]++;
		}
	}
	
	for(int i=1; i<100; i++){
		if(time[i]==3) 
		{	
			total=total+(charge[2]*3);
			continue;
		}
		if(time[i]==2)
		{	
			total=total+(charge[1]*2);
			continue;
		}
		if(time[i]==1) 
		{
			total=total+charge[0];
			continue;
		}
	}
	cout<<total;
	return 0;
}
*/