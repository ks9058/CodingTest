#include <bits/stdc++.h>
using namespace std;

//c++에서 구조체 안에 함수를 쓸 수 있음
//operator() 함수를 오버로딩 해서 사용
//오버로딩이란 같은 이름의 함수지만 매개변수가 다르게 정의된 함수들을 의미
//여기서는 cmp구조체 안에서만 operator()함수 내용이 바뀌는 것 
struct cmp {
    bool operator()(int a, int b) {
        if(abs(a) == abs(b)) return a > b; 
        return abs(a) > abs(b);          
    }
};


int n, temp;
priority_queue<int, vector<int>, cmp> pq;
int main(){
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>temp;
		
		if(temp!=0) pq.push(temp);
		else{
			if(pq.empty()){
				cout<<"0\n";
			}else{
				cout<<pq.top()<<'\n';
				pq.pop();
			}
		}
	}
	return 0; 
}