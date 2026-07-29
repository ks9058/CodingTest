#include <bits/stdc++.h> 
using namespace std; 
int main(){
    cin.tie(NULL);
    cout.tie(NULL);  
    while(true){
        string s; 
        getline(cin, s);  
        if(s == ".") break;
        stack<int> stk; 
        bool check = true;
        
		for(int i = 0; i < s.length(); i++){
			//오른쪽 괄호들은 체크 
            if(s[i] == ')'){ 
                if(stk.size() == 0 || stk.top() == '['){//size를 먼저 체크하고 top에 있는지 체크 
                    check = false; 
                    break; 
                }else{
                    stk.pop();
                }
            }
            if(s[i] == ']'){
                if(stk.size() == 0 || stk.top() == '('){
                    check = false; 
                    break; 
                }else{
                    stk.pop();
                }
            } 
            //왼쪽 괄호들은 push 
            if(s[i] == '(') stk.push(s[i]);
            if(s[i] == '[') stk.push(s[i]); 
        }  
        if(check && stk.size() == 0)  cout << "yes\n";
        else cout << "no\n";
    } 
    return 0;
} 