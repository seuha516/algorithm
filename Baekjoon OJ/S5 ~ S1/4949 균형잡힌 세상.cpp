#include<stdio.h>
#include<iostream>
#include<stack>
#include<cstring>
#include<string>

using namespace std;

int main(){
    while(1){
    	bool ok=1;
		stack<char> st;
    	char c[150]={0,}; scanf("%[^\n]s",c); getchar(); string s=c; if(s==".") break;
		for(int i=0;i<s.length();i++){
			char x=s[i];
			if(x=='[' || x=='(') st.push(x);
			else if(x==']'){
				if(st.empty()){
					ok=0; break;
				}else if(st.top()=='['){
					st.pop();
				}else{
					ok=0; break;
				}
			}else if(x==')'){
				if(st.empty()){
					ok=0; break;
				}else if(st.top()=='('){
					st.pop();
				}else{
					ok=0; break;
				}
			}
		}	
		if(ok&&st.empty()) printf("yes\n"); 
		else printf("no\n"); 
	}
    
    return 0;
}
